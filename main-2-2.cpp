#include <iostream>

using namespace std;

extern int max_element(int array[], int n);

int main(void) {
  // test cases
  int arr1[] = {5, 4, 3, 2, 1};
  cout << max_element(arr1, 5) << "\n";

  int arr2[] = {};
  cout << max_element(arr2, 0) << "\n";

  int arr3[] = {5, 6, 7, -5, -5, -2, 0};
  cout << max_element(arr3, 7) << "\n";

  return 0;
}