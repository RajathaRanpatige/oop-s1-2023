#ifndef ASSISTS_H
#define ASSISTS_H

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <tuple>

using namespace std;

class Assists{

    public:

        static bool firstCall;

        static tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight){

            if (firstCall){
                firstCall = false;
                return {0,0};
            }else{
                return {rand() % matrixWidth, rand() % matrixHeight};
            }
        }

        static double evaluateDistance(tuple<int, int> loc1, tuple<int, int> loc2){
            double dx = get<0>(loc1) - get<0>(loc2);
            double dy = get<1>(loc1) - get<1>(loc2);
            return sqrt(dx*dx + dy*dy);
        }
};

bool Assists::firstCall = true;

#endif