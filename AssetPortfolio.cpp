#include <iostream>
#include "Asset.h"
#include "AssetPortfolio.h"

using namespace std;

// Constructor
AssetPortfolio::AssetPortfolio()
{

    assetList = new Asset[0];
    maxSize = 0;
    size = 0;
}

AssetPortfolio::AssetPortfolio(int Size)
{

    assetList = new Asset[Size];
    maxSize = Size;
    size = 0;
}

// Other methods
int AssetPortfolio::get_num_assets()
{

    return size;
}

bool AssetPortfolio::has_asset(string product)
{

    for (int i = 0; i < size; i++)
    {

        if (assetList[i].get_product_type() == product){
            return true;
        }
    }
    return false;
}

Asset *AssetPortfolio::get_assets()
{

    return assetList;
}

bool AssetPortfolio::add_asset(Asset new_asset)
{

    if (size < maxSize)
    {
        assetList[size] = new_asset;
        size++;
        return true;
    }
    return false;
}

// Destructor
AssetPortfolio::~AssetPortfolio()
{
    delete[] assetList;
}