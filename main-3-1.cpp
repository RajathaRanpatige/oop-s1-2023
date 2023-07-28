#include <iostream>

using namespace std;

extern bool is_fanarray(int array[], int n);

int main(void){

    // Test cases
    int arr1[] = {1,2,3,2,1};
    cout << is_fanarray(arr1,5) << "\n"; // expect 1

    int arr2[] = {};
    cout << is_fanarray(arr2,0) << "\n"; // expect 0

    int arr3[] = {1,2,1,2,1};
    cout << is_fanarray(arr3,5) << "\n"; // expect 0

    int arr4[] = {2,4,4,2};
    cout << is_fanarray(arr4,4) << "\n"; // expect 1

    int arr5[] = {2,1,1,2};
    cout << is_fanarray(arr5,4) << "\n"; // expect 0
}