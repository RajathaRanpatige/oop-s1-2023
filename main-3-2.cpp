#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main(void){

    int *A = readNumbers();
    int *B = reverseArray(A,10);

    if (equalsArray(A,B,10)){
        cout << "True" << "\n";
    }else{
        cout << "False" << "\n";
    }

    delete[] A;
    delete[] B;
}