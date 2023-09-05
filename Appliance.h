#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    int powerRating;
    bool isOn;

    public:
        Appliance(){
            powerRating = 0;
            isOn = false;
        }

        Appliance(int powerRating){
            this->powerRating = powerRating;
            isOn = false;
        }

        bool get_isOn(){
            return isOn;
        }
        void set_isOn(bool isOn){
            this->isOn = isOn;
        }

        int get_powerRating(){
            return powerRating;
        }
        void set_powerRating(int powerRating){
            this->powerRating = powerRating;
        }

        void turnOn(){
            isOn = true;
        }
        void turnOff(){
            isOn = false;
        }
        virtual double getPowerConsumption(){
            return 0;
        }

};

#endif