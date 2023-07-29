#include <iostream>

using namespace std;

extern double weighted_average(int array[], int n);

int main(void){

    // Test cases
    int arr1[6] = {1,2,1,4,1,3};
    cout << weighted_average(arr1, 6) << "\n";

    int arr2[0] = {};
    cout << weighted_average(arr2, 0) << "\n";

    int arr3[5] = {-5,-6,7,0,0};
    cout << weighted_average(arr3, 5) << "\n";
}