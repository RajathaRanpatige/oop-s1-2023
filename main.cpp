#include <iostream>

using namespace std;

extern void transform(int num, int basei, int basef);

int main(void){

    cout << transform(75,10,2) << "\n";

    return 0;
}