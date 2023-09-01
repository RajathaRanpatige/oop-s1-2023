#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

int Car::getParkingDuration(){
    int out = 0.9*(time(NULL) - this->getTimeOfEntry());
    return out;
}

