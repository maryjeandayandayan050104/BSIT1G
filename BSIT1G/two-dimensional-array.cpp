/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    Two Dimentional Array
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\tMULTIPLICATION TABLE USING 2D ARRAY\n" << endl;
    int arr[10][10];
    for(int ant=0; ant<10; ant++) {
        for(int bee=0; bee<10; bee++) {
            arr[ant][bee] = (ant+1)*(bee+1);
        }
    }
  
    for(int cat=0; cat<10; cat++) {
        for(int dog=0; dog<10; dog++) {
            // 'setw()' sets the width of each number to a fixed value.
            cout << setw(4) << arr[cat][dog] << " "; 
        }
        cout << endl;
    }
    return 0;
}
