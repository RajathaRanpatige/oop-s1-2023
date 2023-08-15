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
        int minSum = numbers[length-1];
        int sum;
        int prevSum;

        for (int i = 0; i < length - 1; i++)
        {
            for (int j = 0; j < length - i; j++)
            {

                sum = 0;
                for (int k = i; k <= i + j; k++){
                    sum += numbers[k];
                }
                
                if (sum <= minSum){
                    prevSum = minSum;
                    minSum = sum;
                }
            }
        }
        return prevSum;
    }

    return -1;
}