#include <iostream>

using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(void){

    int A[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

    cout << sum_diagonal(A) << "\n";

    return 0;
}