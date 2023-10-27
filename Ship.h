#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <tuple>
#include "GameEntity.h"

using namespace std;

class Ship : public GameEntity{

    public:

        Ship(int x, int y) : GameEntity(x,y,'S'){}
        Ship(tuple<int,int> pos) : GameEntity(get<0>(pos),get<1>(pos),'S'){}

        void move(int dx, int dy){
            position = {get<0>(position)+dx, get<1>(position)+dy};
        }
};

#endif