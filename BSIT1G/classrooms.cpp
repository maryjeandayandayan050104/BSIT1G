#include <iostream>
#include <string>
using namespace std;
int main(){
    
    // Variables
    int room_Number, room_Capacity, enrolled_stud;
    int empty_Seats;
    string status;

    // User Inputs
    cout << "\nENTER ROOM NUMBER\t\t: ";
    cin >> room_Number;
    cout << "ENTER ROOM CAPACITY\t\t: ";
    cin >> room_Capacity;
    cout << "ENTER NUMBER OF STUDENTS\t: ";
    cin >> enrolled_stud;
    empty_Seats = room_Capacity - enrolled_stud;

   if(room_Capacity >= enrolled_stud <= empty_Seats){
    status = "AVAILABLE";
   }else if(room_Capacity <= enrolled_stud >= empty_Seats){
    status = "NOT AVAILABLE";
   }else{
    status = "Unknown";
   }

   // Display Output
    cout << "\nROOM#\tCAPACITY\tENROLLED\tEMPTY SEATS\tSTATUS\t\n";
    cout << " "<< room_Number <<"\t  "<< room_Capacity <<"\t\t  "<<
    enrolled_stud <<"\t\t   "<< empty_Seats <<"\t\t"<< status <<"\n"<< endl;

    return 0;
}
