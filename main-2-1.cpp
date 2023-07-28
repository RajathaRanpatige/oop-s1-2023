#include <iostream>

using namespace std;

extern int min_element(int array[], int n);

int main(void) {
  // test cases
  int arr1[] = {5, 4, 3, 2, 1};
  cout << min_element(arr1, 5) << "\n";

  int arr2[] = {};
  cout << min_element(arr2, 0) << "\n";

  int arr3[] = {5, 6, 7, -5, -5, -2, 0};
  cout << min_element(arr3, 7) << "\n";

  return 0;
}