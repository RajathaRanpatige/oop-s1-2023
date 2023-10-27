#ifndef SNARE_H
#define SNARE_H

#include <iostream>
#include "Spot.h"
#include "Influence.h"

using namespace std;

class Snare : public Spot, public Influence{

    public:

        bool operative;

        Snare(int x, int y) : Spot(x,y,'S'){
            operative = true;
        }

        bool isOperative(){
            return operative;
        }

        void implement(Spot& spot){
            operative = false;
            spot.setCategory('S');
        }
};

#endif