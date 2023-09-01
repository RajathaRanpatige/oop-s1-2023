#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"
using namespace std;

class Bus : Vehicle{

    public:

        using Vehicle::Vehicle;

        int getParkingDuration();
};

#endif