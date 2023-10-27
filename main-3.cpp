#include <iostream>
#include "Snare.h"
#include "Persona.h"
#include "Play.h"

using namespace std;

int main(){

    Play test;
    vector<Spot*> mat = test.initPlay(3,1,5,1);
    mat[0]->print();
    test.playCycle(5, 10);
    mat[0]->print();

    return 0;
}