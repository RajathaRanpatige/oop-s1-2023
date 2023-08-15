#include <iostream>
using namespace std;

int *readNumbers()
{

    int *numbers = new int[10];

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = 0;
        cin >> numbers[i];
    }

    return numbers;
}

void printNumbers(int *numbers, int length)
{
    if (length > 0)
    {

        for (int i = 0; i < length; i++)
        {
            cout << i << " " << numbers[i] << "\n";
        }
    }
}

int secondSmallestSum(int *numbers, int length)
{

    if (length > 0)
    {
        int *sums = new int[(length+1)*length/2];
        int count = 0;
        int sum;
        for (int i = 0; i < length; i++)
        {
            for (int j = i; j < length; j++)
            {

                sum = 0;
                for (int k = i; k <= j; k++){
                    sum += numbers[k];
                }
                sums[count] = sum;
                count++;
            }
        }
        bool swapped;
        int temp;
        for (int i = 0; i < count -1; i++){
            swapped = false;
            for (int j = 0; j < count-i-1; j++){
                if (sums[j] > sums[j+1]){
                    temp = sums[j];
                    sums[j] = sums[j+1];
                    sums[j+1] = temp;
                    swapped = true;
                }
                if (!swapped){
                    break;
                }
            }
        }

        return sums[1];
    }

    return -1;
}