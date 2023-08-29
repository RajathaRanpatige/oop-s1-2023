#include <iostream>
#include "warrior.h"

using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage){
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player *opponent){
    opponent->takeDamage(this->getDamage());
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

void Warrior::setWeapon(string weapon){
    this->weapon = weapon;
}

string Warrior::getWeapon(){
    return weapon;
}