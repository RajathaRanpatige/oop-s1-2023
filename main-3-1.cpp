#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"
#include "AirFleet.h"
#include <iostream>

using namespace std;

int main(void){

    AirFleet F = AirFleet();

    for (int i = 0; i < 5; i++){
        cout << F.get_fleet()[i]->get_weight() << "\n";
    }

    return 0;
}