#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance{

    double volume;

    public:
        Fridge() : Appliance(){
            volume = 0;
        }

        Fridge(int powerRating, double volume) : Appliance(powerRating){
            this->volume = volume;
        }

        double getVolume(){
            return volume;
        }
        void setVolume(double volume){
            this->volume = volume;
        }
        
        double getPowerConsumption(){
            return this->get_powerRating()*24*volume/100;
        }

};


#endif