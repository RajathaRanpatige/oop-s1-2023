#include <iostream>
#include "AirVehicle.h"

using namespace std;

int main(void){

    AirVehicle A = AirVehicle(500);

    cout << A.get_weight() << "\n";
    cout << A.get_numberOfFlights() << "\n";
    A.fly(50,60);
    cout << A.get_numberOfFlights() << "\n";    

    return 0;
}