#include <iostream>
#include "Asset.h"

using namespace std;

int main(void){

    Asset A = Asset();

    cout << A.get_product_type() << " : " << A.get_value() << "\n";

    Asset B = Asset(5,"Cra");

    cout << B.get_product_type() << " : " << B.get_value() << "\n";

    return 0;
}