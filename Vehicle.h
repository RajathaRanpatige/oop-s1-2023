#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>
using namespace std;

class Vehicle{
    
    int ID;
    time_t timeOfEntry;

    public:

        //Constructor
        Vehicle(){
            ID = -1;
            timeOfEntry = time(NULL);
        }

        Vehicle(int ID){
            this->ID = ID;
            timeOfEntry = time(NULL);
        }

        // Getters and Setters
        int getID(){
            return ID;
        }
        void setID(int ID){
            this->ID = ID;
        }
        time_t getTimeOfEntry(){
            return timeOfEntry;
        }

        int getParkingDuration(){
            int out = 0.9*(time(NULL) - this->getTimeOfEntry());
            return out;
        }

};

#endif