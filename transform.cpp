#include <iostream>
#include <cmath>

using namespace std;
int transform(int num){

    int out = 0;
    int i = 0;

    out += (num % 2) * pow(10,i);

    while (num / 2 != 0) {        
        num = num / 2;     
        i++;
        out += (num % 2) * pow(10,i);
    } 

    return out;
}

int main(void){

    int num;
    cin >> num;

    cout << transform(num) << "\n"; 

    return 0;
}