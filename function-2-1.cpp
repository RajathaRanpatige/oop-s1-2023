#include <iostream>
#include <cmath>

using namespace std;

void print_binary_str(string decimal_number){

  int num = (int)stoi(decimal_number);
  int out = 0;
  int i = 0;

  while (num/2 != 0){
    if (num%2 == 1){
       out += pow(10,i);
    }
    num /= 2;
    i++;
  }
  out += pow(10,i);


  cout << out << "\n";

}