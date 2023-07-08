/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    One Dimentional Array
*/

#include <iostream>
using namespace std;

int main()
{
    int items;
    cout << "\n>> Highest and Lowest Checker <<\n";
    cout << "How many items to be process? ";
    cin >> items;
    int arr[items];
    cout << "Enter items value: " << endl;
    for(int i = 0; i < items; ++i)
    {
        cin >> arr[i];
    }
    int max_number = arr[0];
    int min_number = arr[0];
    for(int i = 1; i < items; ++i)
    {
        if(arr[i] > max_number)
            max_number = arr[i];
        if(arr[i] < min_number)
            min_number = arr[i];
    }
    cout << "\nLargest element: " << max_number << endl;
    cout << "Smallest element: " << min_number << endl;
    return 0;
}