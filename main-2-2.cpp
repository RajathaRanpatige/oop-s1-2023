#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

int main(void){
    
    Fridge A = Fridge(500,2.5);
    TV B = TV(400, 200);

    cout << "A is on: " << A.get_isOn() << ", Power rating: " << A.get_powerRating() << ", Power consumption: " << A.getPowerConsumption() << "\n";
    cout << "B is on: " << B.get_isOn() << ", Power rating: " << B.get_powerRating() << ", Power consumption: " << B.getPowerConsumption() << "\n";

    return 0;
}