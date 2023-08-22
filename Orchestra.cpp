#include <string.h>
#include "Orchestra.h"

using namespace std;

Orchestra::Orchestra(){
    maxSize = 0;
    size = 0;
    members = new Musician[0];
}

Orchestra::Orchestra(int size){
    maxSize = size;
    this->size = 0;
    members = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    return size;
}

bool Orchestra::has_instrument(string instrument){

    for (int i = 0; i < size; i++){
        if (members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){
    return members;
}

bool Orchestra::add_musician(Musician new_musician){

    if (size < maxSize){
        members[size] = new_musician;
        size++;
        return true;
    }
    return false;
}

Orchestra::~Orchestra(){
    delete[] members;
}