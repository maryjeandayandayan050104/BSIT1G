/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    MIDTERM LABORATORY 2
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

// Variables
int num;
double sine, cosine, tangent, logarithm;
double x = 2.83;

// Accept Input integer from 1 to 4
cout << "\nEnter Number (1-4): ";
cin >> num;

// Built-in Mathematical Functions
switch(num){
    case 1:
    sine = sin(x);
    cout << "The Sine of 2.83 is " << sine << endl;
    break;

    case 2:
    cosine = cos(x);
    cout << "The Cosine of 2.83 is " << cosine << endl;
    break;

    case 3:
    tangent = tan(x);
    cout << "The Tangent of 2.83 is " << tangent << endl;
    break;

    case 4:
    logarithm = log(x);
    cout << "The Logarithm of 2.83 is " << logarithm << endl;
    break;

    default:
    cout << "Input value is not in the options.";
    break;
    }

    return 0;
}