#include <iostream>
#include <tuple>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

using namespace std;

int main() {

    Ship ship = Ship(50,50);
    Mine mine = Mine(45,35);

    cout << "Ship : (" << get<0>(ship.position) << "," << get<1>(ship.position) << ") : " << ship.type << "\n";
    cout << "Mine : (" << get<0>(mine.position) << "," << get<1>(mine.position) << ") : " << mine.type << "\n";

    Explosion ripBozo = mine.explode();
    ripBozo.apply(ship);

    cout << "Ship : (" << get<0>(ship.position) << "," << get<1>(ship.position) << ") : " << ship.type << "\n";
    cout << "Mine : (" << get<0>(mine.position) << "," << get<1>(mine.position) << ") : " << mine.type << "\n";
    cout << "Explosion : (" << get<0>(ripBozo.position) << "," << get<1>(ripBozo.position) << ") : " << ripBozo.type << "\n";


    return 0;
}