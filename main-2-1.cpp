#include "AirVehicle.h"
#include "Helicopter.h"
#include <iostream>

using namespace std;

int main(void){
    
    Helicopter A = Helicopter(5690,"Adam");
    A.set_fuel(80);
    A.fly(45,10);

    cout << A.get_fuel() << " " << A.get_numberOfFlights() << "\n";
    
    return 0;
}