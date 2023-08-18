#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

int main(void){

    Person *people = new Person[n];

    PersonList list;
    list.people = people;
    list.numPeople = n;

    for (int i = 0; i < n; i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    list.people[2].name = "YOO";
    list.people[2].age = 5;

    for (int i = 0; i < list.numPeople; i++){
        cout << list.people[i].name << " " << list.people[i].age << "\n";
    }

    PersonList listCopy;
    listCopy = shallowCopyPersonList(list);

    list.people[2].name = "hmmm";
    list.people[2].age = 10;

    for (int i = 0; i < listCopy.numPeople; i++){
        cout << listCopy.people[i].name << " " << listCopy.people[i].age << "\n";
    }

    return 0;
}