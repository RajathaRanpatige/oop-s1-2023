#include <iostream>
#include <math.h>
#include "player.h"

using namespace std;

void Player::setName(string name){
    this->name = name;
}
string Player::getName(){
    return name;
}
void Player::setHealth(int health){
    this->health = health;
}
int Player::getHealth(){
    return health;
}
void Player::setDamage(int damage){
    this->damage = damage;
}
int Player::getDamage(){
    return damage;
}

Player::Player(string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::takeDamage(int damage){
    health = max(health - damage,0);
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

void Player::attack(Player *opponent, int damage){
    opponent->takeDamage(damage);
}