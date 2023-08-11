#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);

int main(void){

    // Test cases
    int A[] = {};
    cout << palindrome_sum(A,0) << "\n";

    int B[5] = {1,2,3,2,1};
    cout << palindrome_sum(B,5) << "\n";

    int C[4] = {4,5,5,4};
    cout << palindrome_sum(C,4) << "\n";

    int D[5] = {1,2,3,4,5};
    cout << palindrome_sum(D,5) << "\n";

    int E[4] = {4,3,2,1};
    cout << palindrome_sum(E,4) << "\n";

    return 0;
}