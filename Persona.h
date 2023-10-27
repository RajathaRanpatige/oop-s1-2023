#ifndef PERSONA_H
#define PERSONA_H


#include <iostream>
#include "Spot.h"

using namespace std;

class Persona : public Spot{

    public:

        Persona(int x, int y) : Spot(x,y,'P'){}

        void shift(int dx, int dy){
            location = {get<0>(location) + dx, get<1>(location) + dy};
        }
};

#endif