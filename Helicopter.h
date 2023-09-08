#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

using namespace std;

class Helicopter : public AirVehicle {

    string name;

    public:

        Helicopter();

        Helicopter(int w, string n);

        void fly(int headwind, int minutes);

        string get_name(){
            return name;
        }
        void set_name(string name){
            this->name = name;
        }

};

#endif