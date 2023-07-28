#include <iostream>

using namespace std;

extern int num_count(int array[], int n, int number);

int main(void) {
  // test cases
  int arr1[5] = {1, 2, 3, 2, 5};
  cout << num_count(arr1, 5, 2) << "\n";

  int arr2[0] = {};
  cout << num_count(arr2, 0, 0) << "\n";

  int arr3[5] = {-4, 0, 0, -6, 1};
  cout << num_count(arr3, 1, 10) << "\n";

  return 0;
}