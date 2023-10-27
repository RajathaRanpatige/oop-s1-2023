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
            this->type = type;
        }

        void setPos(tuple<int,int> Pos){
            position = Pos;
        }

        tuple<int,int> getPos(){
            return position;
        }

        char getType(){
            return type;
        }

        void printData(){
            cout << type << " : pos(" << get<0>(position) << "," << get<1>(position) << ")\n";
        }
};

#endif