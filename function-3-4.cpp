#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
  bool pass = false;
  bool valid = true;

  switch (grade) {
    case 'A':
      pass = true;
      break;
    case 'B':
      pass = true;
      break;
    case 'C':
      pass = true;
      break;
    case 'D':
      pass = false;
      break;
    case 'E':
      pass = false;
      break;
    default:
      valid = false;
      break;
  }
  if (valid) {
    if (pass) {
      cout << "Pass"
           << "\n";
    } else {
      cout << "Fail"
           << "\n";
    }
  } else {
    cout << "Nothing"
         << "\n";
  }
}