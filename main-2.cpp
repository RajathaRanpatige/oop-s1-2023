#include <iostream>
#include "Snare.h"
#include "Persona.h"

using namespace std;

int main(){

    Persona A(5,10);
    Persona B(0,0);
    B.shift(2,2);

    Snare C(10,20);
    cout << C.isOperative() << "\n";

    C.implement(A);

    A.print();
    B.print();
    C.print();

    cout << C.isOperative() << "\n";

    return 0;
}