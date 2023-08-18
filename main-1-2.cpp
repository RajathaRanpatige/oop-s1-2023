#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(void){

    PersonList list = createPersonList(5);

    for (int i = 0; i < 5; i++){
        cout << list.people[i].name << " " << list.people[i].age << "\n";
    }

    return 0;
}