#include <iostream>

using namespace std;

extern void count_digits(int array[4][4]);

int main(void){

    int A[4][4] = {
        {1,0,0,0},
        {0,1,0,0},
        {0,0,0,1},
        {0,0,0,1}
    };

    count_digits(A);

    return 0;
}