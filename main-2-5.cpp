#include <iostream>

using namespace std;

extern bool is_descending(int array[], int n);

int main(void) {
  // test cases
  int arr1[] = {23, 22, 15, 11, 5, 0, -2, -5, -26, -76};
  cout << is_descending(arr1, 10) << "\n";

  int arr2[] = {};
  cout << is_descending(arr2, 0) << "\n";

  int arr3[] = {5, 6, 7, -5, -5, -2, 0};
  cout << is_descending(arr3, 7) << "\n";

  return 0;
}