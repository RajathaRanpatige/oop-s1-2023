#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{

    public:
        string name;
        int health;
        int damage;

        Player(string name, int health, int damage);
        void attack(Player *opponent, int damage);
        void takeDamage(int damage);

        void setName(string name);
        string getName();
        void setHealth(int health);
        int getHealth();
        void setDamage(int damage);
        int getDamage();
};

#endif