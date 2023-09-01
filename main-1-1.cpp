#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main(void){

    Car A = Car(1);
    Bus B = Bus(2);
    Motorbike C = Motorbike(3);

    sleep(10);

    cout << A.getParkingDuration() << " " << B.getParkingDuration() << " " << C.getParkingDuration() << endl;

    return 0;
}