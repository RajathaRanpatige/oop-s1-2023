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

};

#endif