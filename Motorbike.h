#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"
using namespace std;

class Motorbike : public Vehicle{

    public:

        using Vehicle::Vehicle;

        int getParkingDuration();
};

#endif