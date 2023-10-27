#ifndef INFLUENCE_H
#define INFLUENCE_H

#include <iostream>

using namespace std;

class Influence{

    public:

        virtual void implement(Spot& spot) = 0;
};

#endif