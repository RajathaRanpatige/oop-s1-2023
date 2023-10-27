#include <iostream>
#include <tuple>
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

using namespace std;

int main(){

    Spot A(0,5,'X');
    Spot B(0,10,'X');

    Spot C(1,0,'Y');
    Spot D(4,0,'Y');

    tuple<int,int> test1 = Assists::createRandomLoc(10,10);
    tuple<int,int> test2 = Assists::createRandomLoc(10,10);

    cout << Assists::evaluateDistance(A.getLoc(),B.getLoc()) << " " << Assists::evaluateDistance(C.getLoc(),D.getLoc()) << "\n";
    cout << get<0>(test1) << "," << get<1>(test1) << "\n";
    cout << get<0>(test2) << "," << get<1>(test2) << "\n";

    return 0;
}