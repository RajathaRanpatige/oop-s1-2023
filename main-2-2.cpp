#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(void){

    // Test cases
    int A[1] = {0};
    cout << bin_to_int(A,1) << "\n";

    int B[4] = {1,0,1,0};
    cout << bin_to_int(B,4) << "\n";

    int C[9] = {1,0,0,0,0,0,0,1,0};
    cout << bin_to_int(C,9) << "\n";

    return 0;
}