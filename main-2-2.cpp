#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(void){
    int A[] = {0,1,0,0,1};
    cout << binary_to_int(A,5) << "\n";

    return 0;
}