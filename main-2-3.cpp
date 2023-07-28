#include <iostream>

using namespace std;

extern void two_five_nine(int array[], int n);

int main(void) {
  // test cases
  int arr1[] = {5, 4, 3, 2, 1, 9, 9, 5, 3, -3};
  two_five_nine(arr1, 10);

  int arr2[] = {};
  two_five_nine(arr2, 0);

  int arr3[] = {5, 6, 7, -5, -5, -2, 0};
  two_five_nine(arr3, 7);

  return 0;
}