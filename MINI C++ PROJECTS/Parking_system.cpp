#include <bits/stdc++.h>
using namespace std;


int main() {
    int types, hour, extra, price, nexthour;

    cout << endl;
    cout << "           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "               CALCULATE PRICE OF PARKING" << endl;
    cout << "           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    cout << "----------------------TYPE OF VEHICLE------------------" << endl;
    cout << "1. CAR            | RM3   (2hrs)   | + RM2   (per hour)" << endl;
    cout << "2. MOTORCYCLE     | RM2   (2hrs)   | + RM1   (per hour)" << endl;
    cout << endl;
    cout << "ENTER TYPES OF VEHICLE: ";
    cin >> types;

    switch(types){
        case 1 :
        price = 3;
        extra = 2;
        break;

        case 2 :
        price = 2;
        extra = 1;
        break;

        default :
        price = 0;

    }

    cout << "ENTER PERIOD TIME (PER HOUR): ";
    cin >> hour;
    if (hour > 2){
        nexthour = ((hour-2)*extra);   
    }
    else {
        nexthour = 0;
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "   TOTAL PRICE OF PARKING" << endl;
    cout << "-----------------------------" << endl;
    cout << "FIRST 2 HOUR          RM" << price << endl;
    cout << "NEXT HOUR             RM" << nexthour << endl;
    cout << "TOTAL                 RM" << price + nexthour << endl;

    return 0;
}
    
