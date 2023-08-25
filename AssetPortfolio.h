#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include <iostream>
#include "Asset.h"
using namespace std;

class AssetPortfolio{
    public:

    // Variables
    Asset *assetList;
    int maxSize;
    int size;

    // Constructors
    AssetPortfolio();
    AssetPortfolio(int Size);

    // Other methods
    int get_num_assets();
    bool has_asset(string product);
    Asset *get_assets();
    bool add_asset(Asset new_asset);

    // Destructor
    ~AssetPortfolio();

};

#endif