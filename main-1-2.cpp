#include <iostream>

using namespace std;

extern int is_identity(int array[10][10]);

int main(void){

    int A[10][10] = {0};

    for (int i = 0; i < 10; i++){
        A[i][i] = 1;
    }

    cout << is_identity(A) << "\n";

    return 0;
}