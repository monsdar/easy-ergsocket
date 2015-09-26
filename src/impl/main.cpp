
//This include needs to be first, else errors about redefinitions in winsock etc appear... 
//As good as Zmq is... The C++ implementation could use some love :/
#include <zhelpers.hpp>

#include <iostream>
#include <string>
#include <thread>

#include <ErgNet.h>
#include <Erg.h>
#include <CIIHeaders.h>

#include "Erg.pb.h"

void onErgError( int errorCode, char *note, char *errorName, char *errorText)
{
    printf("onErgError called:\nerrorcode: %d\nnote: %s\nerror name: %s\nerror text: %s\n", errorCode, note, errorName, errorText);
    exit(1);
}

int main()
{
    std::cout << "Initing network..." << std::endl;
    std::string pubAddress = "tcp://*:5556";
    zmq::context_t context(1);
    zmq::socket_t publisher(context, ZMQ_PUB);
    publisher.bind(pubAddress.c_str());
    std::cout << "\tNow publishing via " << pubAddress << std::endl;

    ErgNet::setErrorCallback( onErgError );
    ErgNet net = ErgNet();
    std::cout << "We're using the following SDK version:" << std::endl;
    std::cout << "\tDDI: " << tkcmdsetDDI_get_dll_version() << std::endl;
    std::cout << "\tUSB: " << tkcmdsetUSB_get_dll_version() << std::endl;
    std::cout << "\tCSAFE: " << csafe.tkcmdsetCSAFE_get_dll_version() << std::endl;

    std::cout << "Searching for Ergometers..." << std::endl;
    while (net.discoverErgs() == 0)
    {
         std::this_thread::sleep_for(std::chrono::seconds(1));
         std::cout << ".";
    }

    std::cout << "Found an Ergometer:" << std::endl;
    Erg erg = Erg(0);
    std::cout << "\tSerial: " << erg.getSerialNumber() << std::endl;
    std::cout << "\tFirmware: " << erg.getFirmwareVersion() << std::endl;
    std::cout << "\tWorkout type: " << erg.getWorkoutType() << " :: " << erg.getWorkoutTypeText() << std::endl;

    std::cout << "Simply start Rowing..." << std::endl;
    while (!erg.hasStartedRowing())
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << ".";
    }

    std::cout << "Rowing has begun, starting to publish data..." << std::endl;

    while (1)
    {
        EasyErgsocket::Erg ergData;
        ergData.set_displayedtime(erg.getDisplayedTime());
        ergData.set_displayedmeters(erg.getDisplayedMeters());
        ergData.set_cadence(erg.getCadence());
        ergData.set_paceinsecs(erg.getPaceInSecondsPer500());
        ergData.set_calories(erg.getAccumulatedCalories());
        ergData.set_power(erg.getPower());
        ergData.set_heartrate(erg.getHeartRate());

        std::string ergDataStr;
        ergData.SerializeToString(&ergDataStr);
        s_sendmore(publisher, "EasyErgsocket");
        s_send(publisher, ergDataStr);

        std::this_thread::yield();
    }

    return 0;
}
