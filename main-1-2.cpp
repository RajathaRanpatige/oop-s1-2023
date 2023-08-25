#include <iostream>
#include "Asset.h"
#include "AssetPortfolio.h"

using namespace std;

int main(void){

    Asset A = Asset(5,"dogg");
    Asset B = Asset(3,"car");
    Asset C = Asset(2,"brid");

    AssetPortfolio portforlio = AssetPortfolio(2);

    cout << portforlio.add_asset(A) << "\n";
    cout << portforlio.add_asset(B) << "\n";
    cout << portforlio.add_asset(C) << "\n";

    cout << portforlio.get_num_assets() << "\n";

    cout << portforlio.has_asset("car") << " " << portforlio.has_asset("brid") << "\n";
    
    return 0;
}