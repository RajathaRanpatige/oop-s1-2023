#include <iostream>
#include <cmath>
using namespace std;

long int binaryAdd(long int num1, long int num2){
    num1 *= 5;
    num2 *= 5;

    long int out = num1 + num2;
    long int out2 = 0;

    int size = floor(log10(out))+1;

    for (int i = size - 1; i >= 0; i--){
        if (out / (long int)pow(10,i) >= 1){
            out2 += pow(10,i);
        }
        out = out%(long int)pow(10,i);
    }

    return out2;
}

long int binarySub(long int num1, long int num2){
    num1 *= 5;
    num2 *= 5;

    long int out = num1 - num2;
    long int out2 = 0;

    int size = floor(log10(out))+1;

    for (int i = size - 1; i >= 0; i--){
        if (out / (long int)pow(10,i) >= 1){
            out2 += pow(10,i);
        }
        out = out%(long int)pow(10,i);
    }

    return out2;
}

long int binaryLShift(long int num){
    return num * 10;
}

long int binaryRShift(long int num){
    return num / 10;
}

int main(void){

    cout << "111011101011 + 11 = " << binaryAdd(111011101011,11) << "\n";
    cout << "111011101011 - 11 = " << binarySub(111011101011,11) << "\n";
    cout << "111011101011 shifted to right 1 time = " << binaryRShift(111011101011) << "\n";
    cout << "111011101011 shifted to left 1 time = " << binaryLShift(111011101011) << "\n"; 
    
    return 0;
}