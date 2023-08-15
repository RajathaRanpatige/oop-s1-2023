#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern int secondSmallestSum(int *numbers,int length);

int main(void){

    int *A = readNumbers();

    cout << secondSmallestSum(A,10) << "\n";

    delete[] A;

    return 0;
}