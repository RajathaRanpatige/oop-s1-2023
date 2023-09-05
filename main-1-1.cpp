#include <iostream>
#include "Appliance.h"

using namespace std;

int main(void){
    
    Appliance A = Appliance(500);
    
    A.turnOn();

    cout << "A is on: " << A.get_isOn() << ", Power rating: " << A.get_powerRating() << "\n"; 

    return 0;
}