
//This include needs to be first, else errors about redefinitions in winsock etc appear... 
//As good as Zmq is... The C++ implementation could use some love :/
#include <zhelpers.hpp>

#include <chrono>
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
    /*while (!erg.hasStartedRowing())
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << ".";
    }*/

    std::cout << std::endl << "Rowing has begun, starting to publish data..." << std::endl;

    //some measurements to see how well this is running...
    std::chrono::time_point<std::chrono::system_clock> cycleStart = std::chrono::system_clock::now();
    std::chrono::time_point<std::chrono::system_clock> cycleEnd;
    std::vector< std::chrono::duration<double> > durations;
    unsigned int timingOutput = 100;

    EasyErgsocket::Erg ergData;
    //TODO: Fill in the values for the following data at least every couple frames instead of putting dummy values in it
    ergData.set_cadence(0);
    ergData.set_paceinsecs(0);
    ergData.set_calories(0);
    ergData.set_power(0);
    ergData.set_heartrate(0);
    while (1)
    {
        ergData.set_displayedmeters(erg.getDisplayedMeters());
        ergData.set_displayedtime(erg.getDisplayedTime());
        
        std::string ergDataStr;
        ergData.SerializeToString(&ergDataStr);
        s_sendmore(publisher, "EasyErgsocket");
        s_send(publisher, ergDataStr);
        
        //some measurements to see how well this is running...
        cycleEnd = std::chrono::system_clock::now();
        durations.push_back(cycleEnd - cycleStart);

        if (durations.size() == timingOutput)
        {
            double sumDuration = 0.0;
            auto durIter = durations.begin();
            for (; durIter != durations.end(); ++durIter)
            {
                sumDuration += (durIter->count() * 1000.0); //calc in msecs
            }
            std::cout << "Avg Frame time (" << timingOutput << " frames): " << sumDuration / timingOutput << " msecs" << std::endl;
            durations.clear();
        }
        cycleStart = std::chrono::system_clock::now(); //measure for the next cycle

        //yield the thread to allow other processes to access the CPU
        //if we do not do this we would hog the CPU 100%, which is not necessary
        std::this_thread::yield();
    }

    return 0;
}
