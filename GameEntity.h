#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>
#include "Explosion.h"

using namespace std;

class GameEntity{

    public:
        tuple<int,int> position;
        char type;

        GameEntity(int x, int y, char type){
            position = {x,y};
            this->type = type;
        }

        void move(int dx, int dy){};
        Explosion explode(){return nullptr};

        void setPos(tuple<int,int> Pos){
            position = Pos;
        }

        tuple<int,int> getPos(){
            return position;
        }

        char getType(){
            return type;
        }
};

#endif