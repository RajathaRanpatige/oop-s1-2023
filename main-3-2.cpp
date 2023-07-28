#include <iostream>

using namespace std;

extern int median_array(int array[], int n);

int main(void) {
  // Test cases
  int arr1[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  cout << median_array(arr1, 11) << "\n";

  int arr2[0] = {};
  cout << median_array(arr2, 0) << "\n";

  int arr3[4] = {1, 2, 2, 4};
  cout << median_array(arr3, 4) << "\n";

  int arr4[5] = {10, 2, 3, 4, 5};
  cout << median_array(arr4, 5) << "\n";

  int arr5[1] = {2};
  cout << median_array(arr5, 1) << "\n";
}