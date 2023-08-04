#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
  int out = 0;
  for (int i = 0; i < number_of_digits; i++){

    out += binary_digits[number_of_digits-i-1] * pow(2,i);
  }
  return out;
}