#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std;

int main(void){
    
    Fridge A = Fridge(500,2.5);
    TV B = TV(400, 200);

    cout << "A is on: " << A.get_isOn() << ", Power rating: " << A.get_powerRating() << ", Power consumption: " << A.getPowerConsumption() << "\n";
    cout << "B is on: " << B.get_isOn() << ", Power rating: " << B.get_powerRating() << ", Power consumption: " << B.getPowerConsumption() << "\n";

    A.turnOn();
    B.turnOn();

    House H = House(5);
    H.addAppliance(&A);
    H.addAppliance(&B);

    cout << "House Total consumption: " << H.getTotalPowerConsumption() << "\n";

    return 0;
}