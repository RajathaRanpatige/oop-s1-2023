#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main(void){

    Person *A = createPersonArray(5);

    cout << A[0].name << " " << A[0].age << "\n";

    delete[] A;

    return 0;
}