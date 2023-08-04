#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main(void){
    int A[] = {1,2,3,2,1};
    cout << sum_if_palindrome(A,5) << "\n";

    return 0;
}