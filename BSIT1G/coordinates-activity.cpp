/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    Compute the distance between two points
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int X1, X2, Y1, Y2;
    int X, Y;
    float distance;
    
    // Input
    cout << "Enter x1-coordinate: ";
    cin >> X1;
    cout << "Enter y1-coordinate: ";
    cin >> Y1;
    cout << "Enter x2-coordinate: ";
    cin >> X2;
    cout << "Enter y2-coordinate: ";
    cin >> Y2;
    
    X = pow((X2 - X1), 2);
    Y = pow((Y2 - Y1), 2);
    
    // Distance between two points
    distance = sqrt(X + Y);
    
    // Display Distance
    cout << "The distance between the two points is " << distance << endl;
    
    return 0;
}



/*

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare variables for two points (x1,y1) and (x2,y2)
    double x1, y1, x2, y2;

    // Prompt the user to enter the coordinates of the first point
    cout << "Enter the x-coordinate of the first point: ";
    cin >> x1;
    cout << "Enter the y-coordinate of the first point: ";
    cin >> y1;

    // Prompt the user to enter the coordinates of the second point
    cout << "Enter the x-coordinate of the second point: ";
    cin >> x2;
    cout << "Enter the y-coordinate of the second point: ";
    cin >> y2;

    // Compute the distance between the two points using the distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    cout << "The distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << distance << endl;

    return 0;
}

*/
