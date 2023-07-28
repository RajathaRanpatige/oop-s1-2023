#include <iostream>

using namespace std;

extern int count_evens(int number);

int main(void) {
  // test cases
  int a = 10;
  cout << count_evens(a) << "\n";

  int b = 0;
  cout << count_evens(b) << "\n";

  int c = 1;
  cout << count_evens(c) << "\n";

  int d = 50;
  cout << count_evens(d) << "\n";

  return 0;
}