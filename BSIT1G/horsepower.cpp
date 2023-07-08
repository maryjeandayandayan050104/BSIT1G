/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    MIDTERM LABORATORY 1
*/

#include <iostream>
using namespace std;

int main(){

// Variables
float horsePower;
float watt, kilo_watt, feet_lbs, joule_sec;

    cout << "\nInput value in HorsePower (hp)\t\t\t\t: ";
    cin >> horsePower;

    // Convertion of horsepower
    watt = horsePower * 745.7;
    kilo_watt = watt / 1000;
    feet_lbs = horsePower * 550;
    joule_sec = watt * 1;

    // Display output
    cout << "\nThe converted value in Watt (W)\t\t\t\t: " << watt << endl;
    cout << "The converted value in KiloWatt (KW)\t\t\t: " << kilo_watt << endl;
    cout << "The converted value in Feet-pounds per second(ft-lbs/s) : " << feet_lbs << endl;
    cout << "The converted value in Joules per second\t\t: " << joule_sec << endl;

    return 0;

}