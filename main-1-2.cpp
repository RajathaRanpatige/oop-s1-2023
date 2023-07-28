#include <iostream>

using namespace std;

extern double array_mean(int array[], int n);

int main(void){

    //test cases
    int arr1[5] = {1,2,3,4,5};
    cout << array_mean(arr1,5) << "\n";

    int arr2[0] = {};
    cout << array_mean(arr2,0) << "\n";    

    int arr3[1] = {-4};
    cout << array_mean(arr3,1) << "\n";

    return 0;
}