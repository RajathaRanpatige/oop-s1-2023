#include <iostream>
using namespace std;

int *readNumbers(){

    int* numbers = new int[10];

    for (int i = 0; i < 10; i++){
        numbers[i] = 0;
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

void hexDigits(int *numbers,int length){
    if (length > 0){
        for (int i = 0; i < length; i++){
            cout << i << " " << numbers[i] << " ";

            if (numbers[i] < 10){
                cout << numbers[i];
            }else{
                switch (numbers[i])
                {
                case 10:
                    cout << "A";
                    break;
                case 11:
                    cout << "B";
                    break;
                case 12:
                    cout << "C";
                    break;
                case 13:
                    cout << "D";
                    break;
                case 14:
                    cout << "E";
                    break;
                case 15:
                    cout << "F";
                    break;
                default:
                    break;
                }
            }
            cout << "\n";
        }
    }
}