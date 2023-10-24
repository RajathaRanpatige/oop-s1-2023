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

        vector<GameEntity*> get_entities(){
            return entities;
        }
        void set_entities(vector<GameEntity*> Entities){
            entities = Entities;
        }

        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            for (int i = 0; i < numShips; i++){
                entities.push_back(new Ship(Utils::generateRandomPos(gridWidth,gridHeight)));
            }
            for (int i = 0; i < numMines; i++){
                entities.push_back(new Mine(Utils::generateRandomPos(gridWidth,gridHeight)));
            }
            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold){
            
            int count = 0;

            while (count <= maxIterations){

                for (int i = 0; i < (int)entities.size(); i++){
                    if (entities[i]->type == 'S'){
                        entities[i]->move(1,0);
                    }
                }

                for (int i = 0; i < (int)entities.size(); i++){

                    if (entities[i]->type == 'M'){

                        for (int j = 0; j < (int)entities.size(); j++){
                            if (entities[j]->type == 'S'){
                                
                                if (Utils::calculateDistance(entities[i]->position,entities[j]->position)){
                                    Explosion exp = entities[i]->explode();
                                    exp.apply(entities[j]);
                                }
                            }
                        }

                    }
                }

            }

            
        }
};

#endif