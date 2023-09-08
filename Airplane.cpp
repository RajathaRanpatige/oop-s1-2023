#include "AirVehicle.h"
#include "Airplane.h"
#include <math.h>

Airplane::Airplane(){}

Airplane::Airplane(int w, int p) : AirVehicle(w){
    this->numPassengers = p;
}

void Airplane::fly(int headwind, int minutes){
    float initialFuel = this->get_fuel();
    float newFuel = initialFuel;

    newFuel -= minutes * numPassengers * 0.001;

    if (headwind >= 60){
        newFuel -= minutes * 0.5;
    } else {
        newFuel -= minutes * 0.25;
    }

    if (newFuel > 20){
        this->set_fuel(newFuel);
        this->set_numberOfFlights(this->get_numberOfFlights() + 1);
    }
}

int Airplane::get_numPassengers(){
    return numPassengers;
}

void Airplane::reducePassengers(int x){
    numPassengers -= x;
    numPassengers = max(0,numPassengers);
}