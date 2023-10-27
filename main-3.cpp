#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Game.h"

using namespace std;

int main() {

    Game test;
    vector<GameEntity*> entities = test.initGame(5,2,100,100);

    for (int i = 0; i < entities.size(); i++){
        entities[i]->printData();
    }

    test.gameLoop(20,10);
    cout << endl;

    for (int i = 0; i < entities.size(); i++){
        entities[i]->printData();
    }

    return 0;
}