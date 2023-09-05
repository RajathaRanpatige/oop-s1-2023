#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

int main(void){
    
    Fridge A = Fridge(500,2.5);
    
    A.turnOn();

    cout << "A is on: " << A.get_isOn() << ", Power rating: " << A.get_powerRating() << ", Power consumption: " << A.getPowerConsumption() << "\n"; 

    return 0;
}