#include <iostream>

using namespace std;

extern void count_digits(int array[4][4]);

int main(void){

    int A[4][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {5,6,7,8},
        {9,9,9,-1}
    };

    count_digits(A);

    return 0;
}