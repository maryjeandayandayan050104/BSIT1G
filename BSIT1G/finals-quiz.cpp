#include <iostream>
using namespace std;
struct Time
{
    int hours;
    int minutes;
    int seconds;
};
int toSeconds(Time now);
int main(){
    Time t;
    t.hours = 5;
    t.minutes = 30;
    t.seconds = 45;
    cout << "Total seconds: " << toSeconds(t) << endl;
    return 0;
}
int toSeconds(Time now)
{
    return 3600 * now.hours + 60 * now.minutes + now.seconds;
}