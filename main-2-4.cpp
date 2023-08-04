#include <iostream>

using namespace std;

extern int sum_min_max(int integers[], int length);

int main(void){

    int A[] = {7,2,3,4,5,-1,-2,-3,-4,1};

    cout << sum_min_max(A,10) << "\n";

    return 0;
}