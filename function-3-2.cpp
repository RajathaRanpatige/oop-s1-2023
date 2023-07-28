#include <iostream>
using namespace std;

int median_array(int array[], int n) {
  int upper = n - 1;
  int temp;
  int median = 0;
  bool swapped;

  if ((n > 0) && (n % 2 != 0)) {
    for (int i = 0; i < n - 1; i++) {
      swapped = false;
      for (int j = 0; j < upper; j++) {
        if (array[j] > array[j + 1]) {
          temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
          swapped = true;
        }
      }
      if (!swapped) {
        break;
      }
      upper--;
    }
    median = array[n / 2];
  }

  // // test print to check the sort worked
  // for (int i = 0; i < n; i++) {
  //   cout << array[i] << " ";
  // }
  // cout << "\n";

  return median;
}