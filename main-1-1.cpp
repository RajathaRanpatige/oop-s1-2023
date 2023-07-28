#include <iostream>
using namespace std;

extern int array_sum(int[], int);

int main(void) {
  // test cases
  int arr1[5] = {0, 1, 2, 3, 4};
  cout << array_sum(arr1, 5) << "\n";

  int arr2[0] = {};
  cout << array_sum(arr2, 0) << "\n";

  int arr3[4] = {-5, 5, -5, -5};
  cout << array_sum(arr3, 4) << "\n";

  return 0;
}