#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <tuple>

using namespace std;

class Spot{

    public:

        tuple<int, int> location;
        char category;

        Spot(int x, int y, char category){
            location = {x,y};
            this->category = category;
        }

        tuple<int, int> getLoc(){
            return location;
        }

        char getCategory(){
            return category;
        }

        void setLoc(int x, int y){
            location = {x,y};
        }

        void setCategory(char category){
            this->category = category;
        }

};

#endif