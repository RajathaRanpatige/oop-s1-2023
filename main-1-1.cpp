#include <iostream>

extern void print_matrix(int array[10][10]);

int main(void){

    // Test cases
    int A[10][10] = {{0}};
    print_matrix(A);
    std::cout << std::endl;
    
    int B[10][10] = {{0}};
    int c = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            B[i][j] = c;
            c++; // wow
        }
    }
    print_matrix(B);

    return 0;
}