#include <iostream>
#include "workshop.h"

using namespace std;

int main(void){

    // Part 2
    double A = 5;
    changeValue(&A);

    cout << A << "\n";


    // Part 3
    double B[5] = {1.0,2.0,3.0,4.5,5.6};
    printArray(B,5);


    // Part 4
    double C[4] = {5,6,10,1};
    cout << arrayMax(C,4) << "\n";


    // Part 7
    double* D = dynamicArray(5,1.0);
    printArray(D,5);
    delete[] D;
    return 0;
}