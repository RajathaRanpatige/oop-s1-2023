#ifndef PLAY_H
#define PLAY_H

#include <iostream>
#include <vector>
#include <cmath>
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"
#include "Assists.h"

using namespace std;

class Play{

    private:

        vector<Spot*> matrix;
        int matrixWidth;

    public:

        vector<Spot*>& initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight){

            this->matrixWidth = matrixWidth;

            for (int i = 0; i < numPersonas; i++){
                tuple<int,int> loc = Assists::createRandomLoc(matrixWidth,matrixHeight);
                matrix.push_back(new Persona(get<0>(loc), get<1>(loc)));
            }
            for (int i = 0; i < numSnares; i++){
                tuple<int,int> loc = Assists::createRandomLoc(matrixWidth,matrixHeight);
                matrix.push_back(new Snare(get<0>(loc), get<1>(loc)));
            }

            return matrix;
        }

        int playCycle(int maxCycles, double snareTriggerDistance){

            int cycles = 0;

            while (cycles <= maxCycles){

                for (int i = 0; i < matrix.size(); i++){
                    if (matrix[i]->getCategory() == 'P'){
                        ((Persona*)matrix[i])->shift(1,0);
                    }
                }

                for (int i = 0; i < matrix.size(); i++){

                    if (matrix[i]->getCategory() == 'S'){
                        if (((Snare*)matrix[i])->isOperative()){
                            
                            for (int j = 0; j < matrix.size(); j++){

                                if (Assists::evaluateDistance(matrix[i]->getLoc(),matrix[j]->getLoc()) <= snareTriggerDistance && matrix[j]->getCategory() == 'P'){
                                    ((Snare*)matrix[i])->implement(*matrix[j]);
                                }

                            }

                        }
                    }
                }

                for (int i = 0; i < matrix.size(); i++){
                    if (matrix[i]->getCategory() == 'P'){
                        if (get<0>(matrix[i]->getLoc()) > matrixWidth){
                            cout << "Persona has won the game!" << endl;
                            return cycles;
                        }
                    }
                }

                cycles++;
            }
            cout << "Maximum number of cycles reached. Game over." << endl;
            return cycles - 1;
        }

        vector<Spot*>& getMatrix(){
            return matrix;
        }


};


#endif