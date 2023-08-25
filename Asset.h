#ifndef ASSET_H
#define ASSET_H

#include <iostream>
using namespace std;

class Asset{
    public:

    // Variables
    string product_type;
    int value;

    // Constructors
    Asset();
    Asset(int Value, string Product_type);

    // Other methods
    string get_product_type();
    int get_value();

    // Destructor
    ~Asset();

};

#endif