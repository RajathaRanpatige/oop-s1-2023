#include <iostream>
#include <ctime>
#include "Vehicle.h"
using namespace std;

class ParkingLot{

    Vehicle *vehicles;

    private:
        int max;
        int count;

    public:

        ParkingLot(int max){
            this->max = max;
            count = 0;
            vehicles = new Vehicle[max];
        }

        int getCount(){
            return count;
        }

        void parkVehicle(Vehicle *vehicle){
            if (count < max){
                vehicles[count] = *vehicle;
                count++;
            } else{
                cout << "The lot is full\n";
            }
        }

        void unparkVehicle(int ID){
            int index = -1;
            for (int i = 0; i < count; i++){
                if (ID == vehicles[i].getID()){
                    index = i;
                    break;
                }
            }

            if (index != -1){

                for (int i = index; i < count - 1; i++){
                    vehicles[i] = vehicles[i+1];
                }

                count--;

            }else{
                cout << "Vehicle not in the lot";
            }
        }

        int countOverstayingVehicles(int maxParkingDuration){
            int count = 0;
            for (int i = 0; i < count; i++){
                if (vehicles[i].getParkingDuration() > maxParkingDuration){
                    count++;
                }
            }
            return count;
        }

        ~ParkingLot(){
            delete[] vehicles;
        }
};