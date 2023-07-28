#include <iostream>

using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(void){

    //test cases
    int arr1[5] = {1,2,3,2,5};
    int arr12[5] = {6,7,8,9,10};
    cout << sum_two_arrays(arr1,arr12,5) << "\n";

    int arr2[0] = {};
    int arr22[0] = {};
    cout << sum_two_arrays(arr2,arr22,0) << "\n";    

    int arr3[5] = {-4,0,0,-6,1};
    int arr33[5] = {4,0,0,6,-1};
    cout << sum_two_arrays(arr3,arr33,5) << "\n";

    return 0;
}