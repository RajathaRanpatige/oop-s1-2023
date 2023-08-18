#include "Person.h"

PersonList createPersonList(int n){

    Person *people = new Person[n];

    PersonList list;
    list.people = people;
    list.numPeople = n;

    for (int i = 0; i < n; i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    return list;

}