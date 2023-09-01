#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
#include <ctime>
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

    ParkingLot lot = ParkingLot(10);

    Vehicle A = Car(1);
    Vehicle B = Car(2);
    Vehicle C = Car(3);
    Vehicle D = Car(4);
    Vehicle E = Car(5);

    Vehicle F = Bus(6);
    sleep(16);
    Vehicle G = Bus(7);
    Vehicle H = Bus(8);

    Vehicle I = Bus(9);
    Vehicle J = Bus(10);

    lot.parkVehicle(&A);
    lot.parkVehicle(&B);
    lot.parkVehicle(&C);
    lot.parkVehicle(&D);
    lot.parkVehicle(&E);
    lot.parkVehicle(&F);
    lot.parkVehicle(&G);
    lot.parkVehicle(&H);
    lot.parkVehicle(&I);
    lot.parkVehicle(&J);

    cout << lot.countOverstayingVehicles(15) << "\n";


    return 0;
}