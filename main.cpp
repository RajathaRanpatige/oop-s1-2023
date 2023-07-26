#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  std::cout << "The number is: " << count(array, 5) << std::endl;

  // test case 1
  // int array[3] = {-1,2,3};
  // std::cout << "The number is: " << count(array, 3) << std::endl;

  // test case 2
  // int array[10] = {2,4,6,8,10,-10,0,0,5,2};
  // std::cout << "The number is: " << count(array, 10) << std::endl;

  return 0;
}