#include "AirVehicle.h"
#include "Helicopter.h"
#include <string>
#include <cmath>

using namespace std;

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, string n) : AirVehicle(w){
    this->name = n;
}

void Helicopter::fly(int headwind, int minutes){
    float initialFuel = this->get_fuel();
    float newFuel = initialFuel;

    int overweight = max(0,this->get_weight()-5670);
    newFuel -= minutes * overweight * 0.01;

    if (headwind >= 40){
        newFuel -= minutes * 0.4;
    } else {
        newFuel -= minutes * 0.18;
    }

    if (newFuel > 20){
        this->set_fuel(newFuel);
        this->set_numberOfFlights(this->get_numberOfFlights() + 1);
    }
}