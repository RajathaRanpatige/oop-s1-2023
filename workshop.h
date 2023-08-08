#include <iostream>

using namespace std;

void changeValue(double *num)
{

    *num = 42;
}

void printArray(double *array, int len)
{

    for (int i = 0; i < len; i++)
    {

        cout << array[i] << " ";
    }
    cout << "\n";
}

double arrayMax(double *array, int len)
{

    if (len > 0)
    {

        double max = array[0];

        for (int i = 1; i < len; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
        }

        return max;
    }

    return -1;
}

double *dynamicArray(int len, double M)
{

    if (len > 0)
    {

        double *array = new double(len);

        for (int i = 0; i < len; i++)
        {
            array[i] = M;
        }
        return array;
    }
    return nullptr;
}