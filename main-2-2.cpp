#include "AirVehicle.h"
#include "Airplane.h"
#include <iostream>

using namespace std;

int main(void){
    
    Airplane A = Airplane(5690,100);
    A.set_fuel(95);
    A.fly(65,120);

    cout << A.get_fuel() << " " << A.get_numberOfFlights() << "\n";
    
    return 0;
}