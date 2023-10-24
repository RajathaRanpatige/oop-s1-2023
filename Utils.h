#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <tuple>
#include "GameEntity.h"

using namespace std;

class Utils{

    public:
        tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            return {rand()%gridWidth , rand()%gridHeight};
        }

        double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2){
            return sqrt(pow(get<0>(pos1) - get<0>(pos2),2) + pow(get<1>(pos1) - get<1>(pos2),2));
        }
};

#endif