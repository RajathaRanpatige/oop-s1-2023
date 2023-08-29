#ifndef WIZARD_H
#define WIZARD_H

#include <string>
#include "player.h"
using namespace std;

class Wizard : public Player {
    int mana;

    public:
        Wizard(string name, int health, int damage, int mana);

        void castSpell(Player *opponent);

        void setMana(int mana);
        int getMana();
};

#endif