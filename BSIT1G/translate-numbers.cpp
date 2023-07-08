/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    MIDTERM LABORATORY #5
*/

#include<iostream>
using namespace std;
void expand(int);

int main(){
    // Input
    int num;
    cout << "Enter three digit number [0-999]: ";
    cin >> num;
    expand(num);
    }

    void expand(int value){
    const char* const ones[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char* const tens[10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if(value < 0){
        cout << "Minus";
            expand(-value);

    // Hundreds
    }else if(value >= 100){
        expand(value / 100);
        cout << " Hundred";
            if(value % 100){
                cout << " and ";
                expand(value % 100);
            } 
        
    // Tens
    }else if(value >= 20){
        cout << tens[value / 10];
            if(value % 10){
                cout << " ";
                expand(value % 10);
            }

    // Ones
    }else{
        cout << ones[value];
    }

    return;
}
