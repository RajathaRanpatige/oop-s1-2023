#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

using namespace std;

class GameEntity{

    public:
        tuple<int,int> position;
        char type;

        GameEntity(int x, int y, char type){
            position = {x,y};
            type = type;
        }

        tuple<int,int> getPos(){
            return position;
        }

        char getType(){
            return type;
        }
};

#endif