#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <tuple>
#include <vector>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

using namespace std;

class Game{

    public:
        vector<GameEntity*> entities;
        int NumShips;
        int NumMines;

        vector<GameEntity*> get_entities(){
            return entities;
        }
        void set_entities(vector<GameEntity*> Entities){
            entities = Entities;
        }

        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            NumShips =numShips;
            NumMines = numMines;
            for (int i = 0; i < numShips; i++){
                entities.push_back(new Ship(Utils::generateRandomPos(gridWidth,gridHeight)));
            }
            for (int i = 0; i < numMines; i++){
                entities.push_back(new Mine(Utils::generateRandomPos(gridWidth,gridHeight)));
            }
            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold){
            for (int i = 0; i < NumShips; i++){
                
            }
        }

};

#endif