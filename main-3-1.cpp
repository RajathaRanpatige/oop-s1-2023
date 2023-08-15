#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(void){

    int *A = readNumbers();
    int *B = readNumbers();

    cout << equalsArray(A,B,10) << "\n";

    delete[] A;
    delete[] B;
}