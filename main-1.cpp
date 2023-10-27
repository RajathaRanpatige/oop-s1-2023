#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

using namespace std;

int main() {

    Utils utils;
    tuple<int,int> pos1 = utils.generateRandomPos(100,100);
    tuple<int,int> pos2 = utils.generateRandomPos(100,100);

    cout << get<0>(pos1) << "," << get<1>(pos1) << "\n";
    cout << get<0>(pos2) << "," << get<1>(pos2) << "\n";
    cout << utils.calculateDistance(pos1,pos2) << "\n";

    return 0;
}