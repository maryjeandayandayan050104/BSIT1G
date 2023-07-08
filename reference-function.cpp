#include <iostream>
using namespace std;

void swapit (int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main (){
    int m = 250;
    int n = 300;
    swapit (m, n);
    cout << "\nm's value is " << m;
    cout << "\nn's value is " << n;
    return 0;
}