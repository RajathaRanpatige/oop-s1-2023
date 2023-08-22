#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

using namespace std;

class Musician
{
public:

    string instrument;
    int experience;

    Musician();

    Musician(string instrument, int experience);

    string get_instrument();

    int get_experience();
};
#endif
