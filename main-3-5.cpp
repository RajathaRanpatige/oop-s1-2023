#include <iostream>

using namespace std;

extern double sum_even(double array[], int n);

int main(void){

    // Test cases
    double arr1[4] = {1.1,2.2,3.3,-5.55};
    cout << sum_even(arr1,4) << "\n";

    double arr2[0] = {};
    cout << sum_even(arr2,0) << "\n";

    double arr3[5] = {50,100,12.5,-0.01,-2};
    cout << sum_even(arr3,5) << "\n";
}