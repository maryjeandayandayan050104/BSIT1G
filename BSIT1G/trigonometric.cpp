/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    Program that would accept a number and 
    display the cosine, sine and tangent values of the input number.
*/

#include <iostream>
#include <math.h>
using namespace std;
  
int main()
{
    double a, b, c, d;

    // Input
    cout << "Enter a number: ";
    cin >> a;

    // Compute the values for cosine, sine, and tangent
    b = cos(a);
    c = sin(a);
    d = tan(a);

    // Display the results
    cout << "The cosine value of " << a << " is " << b << endl;
    cout << "The sine value of " << a << " is " << c << endl;
    cout << "The tangent value of " << a << " is " << d << endl;
    
    return 0;
}




/*

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare a variable to store the user's input number
    double num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Compute the cosine, sine, and tangent values of the input number
    double cos_val = cos(num);
    double sin_val = sin(num);
    double tan_val = tan(num);

    // Display the results
    cout << "The cosine of " << num << " is " << cos_val << endl;
    cout << "The sine of " << num << " is " << sin_val << endl;
    cout << "The tangent of " << num << " is " << tan_val << endl;

    return 0;
}

*/