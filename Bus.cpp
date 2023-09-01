#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"
using namespace std;

int Bus::getParkingDuration(){
    int out = 0.75*(time(NULL) - this->getTimeOfEntry());
    return out;
}