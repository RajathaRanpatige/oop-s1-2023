#include <iostream>

using namespace std;

extern bool is_ascending(int array[], int n);

int main(void) {
  // test cases
  int arr1[] = {-1, 2, 3, 5, 6, 9, 11, 12, 13, 23};
  cout << is_ascending(arr1, 10) << "\n";

  int arr2[] = {};
  cout << is_ascending(arr2, 0) << "\n";

  int arr3[] = {5, 6, 7, -5, -5, -2, 0};
  cout << is_ascending(arr3, 7) << "\n";

  return 0;
}