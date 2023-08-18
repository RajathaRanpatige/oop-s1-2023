#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){

    PersonList list;
    list.people = pl.people;
    list.numPeople = pl.numPeople;

    return list;

}