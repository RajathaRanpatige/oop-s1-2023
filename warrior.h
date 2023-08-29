#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include "player.h"
using namespace std;

class Warrior : public Player {
    string weapon;

    public:
        Warrior(string name, int health, int damage, string weapon);

        void swingWeapon(Player *opponent);

        void setWeapon(string weapon);
        string getWeapon();
};

#endif