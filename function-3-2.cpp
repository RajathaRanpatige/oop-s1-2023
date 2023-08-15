#include <iostream>
using namespace std;

int *readNumbers(){

    int* numbers = new int[10];

    for (int i = 0; i < 10; i++){
        numbers[i] = 0;
        cout << i << "\n";
        cin >> numbers[i];
    }

    return numbers;

}

void printNumbers(int *numbers, int length){
    if (length > 0){

        for (int i = 0; i < length; i++){
            cout << i << " " << numbers[i] << "\n";
        }

    }
}

bool equalsArray(int *numbers1,int *numbers2,int length){

    if (length > 0){

        for (int i = 0; i < length; i++){
            if (numbers1[i] != numbers2[i]){
                return false;
            }
        }
        return true;
    }
    return false;

}

int *reverseArray(int *numbers1,int length){
    if (length > 0){

        int* rNumbers = new int[length];

        for (int i = 0; i < length; i++){
            rNumbers[length - i - 1] = numbers1[i];
        }

        return rNumbers;

    }
    return nullptr;
}