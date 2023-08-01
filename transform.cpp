#include <cmath>

int transform(int num, int basei, int basef){

    int out = 0;
    int i = 0;

    do {
        out += (num % basef) * pow(10,i);

        i++;
    } while (num / basef != 0);

    return out;
}