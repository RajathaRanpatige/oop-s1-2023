#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance{

    double screenSize;

    public:
        TV() : Appliance(){
            screenSize = 0;
        }

        TV(int powerRating, double screenSize) : Appliance(powerRating){
            this->screenSize = screenSize;
        }

        double getScreenSize(){
            return screenSize;
        }
        void setScreenSize(double screenSize){
            this->screenSize = screenSize;
        }
        
        double getPowerConsumption(){
            return this->get_powerRating()*screenSize/10;
        }

};


#endif