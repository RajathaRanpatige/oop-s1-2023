#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"
using namespace std;

int Motorbike::getParkingDuration(){
    int out = 0.85*(time(NULL) - this->getTimeOfEntry());
    return out;
}