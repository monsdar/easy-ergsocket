
#include <iostream>
#include <thread>

#include "ErgNet.h"
#include "Erg.h"
#include "CIIHeaders.h"

void onErgError( int errorCode, char *note, char *errorName, char *errorText)
{
    printf("onErgError called:\nerrorcode: %d\nnote: %s\nerror name: %s\nerror text: %s\n", errorCode, note, errorName, errorText);
    exit(1);
}

int main()
{
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

    while (1)
    {
        std::cout << erg.hasStartedRowing() << " - " << erg.getDisplayedMeters() << " - " << erg.getStrokeStateText() << " - " << erg.getDisplayedTime() << std::endl;
    }

    return 0;
}
