#include <iostream>

using namespace std;

void count_digits(int array[4][4]){

    int counts[10] = {0};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){

            for (int k = 0; k < 10; k++){

                if (array[i][j] == k){
                    counts[k]++;
                    break;
                }
            }

        }
    }

    for (int i = 0; i < 10; i++){
        cout << i << ":" << counts[i] << ";";
    }
    cout << "\n";
}