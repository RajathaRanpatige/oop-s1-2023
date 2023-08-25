#include <iostream>
#include "Asset.h"

using namespace std;

Asset::Asset(){
    product_type = "";
    value = 0;
}

Asset::Asset(int Value, string Product_type){

    product_type = Product_type;
    value = Value;
}

string Asset::get_product_type(){
    return product_type;
}

int Asset::get_value(){
    return value;
}

Asset::~Asset(){
    // Do nothing
};