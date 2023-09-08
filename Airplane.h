#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane : public AirVehicle {

    int numPassengers;

    public:

        Airplane();

        Airplane(int w, int p);

        void fly(int headwind, int minutes);

        int get_numPassengers();

        void reducePassengers(int x);

};

#endif