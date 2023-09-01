#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"
using namespace std;

class Car : Vehicle{

    public:

        using Vehicle::Vehicle;

        int getParkingDuration();
};

#endif