#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

class House{

    Appliance **appliances;
    int numAppliances;
    int count;

    public:

        House(){
            numAppliances = 0;
            count = 0;
            appliances = new Appliance*[numAppliances];
        }
        House(int numAppliances){
            this->numAppliances = numAppliances;
            count = 0;
            appliances = new Appliance*[numAppliances];
        }

        bool addAppliance(Appliance *appliance){

            if (count < numAppliances){
                
                appliances[count] = appliance;
                count++;
                return true;

            }else{
                return false;
            }

        }

        double getTotalPowerConsumption(){
            double total = 0;
            for (int i = 0; i < count; i++){
                total += appliances[i]->getPowerConsumption();
            }
            return total;
        }

        ~House(){
            delete[] appliances;
        }
};

#endif