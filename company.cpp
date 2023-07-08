/*
This program is a simple login system written in C++. It prompts the user to enter their email
and password, and checks if they match the predefined values. If the login is successful, the
program displays a message indicating that the login was successful. If the login is unsuccessful,
the program allows the user to try again up to three times before locking them out for ten seconds.
If the user still cannot log in after three attempts, they are given the option to try again
or exit the program.

The first part of the program allows the users to enter their email and password. If the email
and password match the ones stored in the code, the program will display a table of employee's
name, department, position, and status.

1. Use the `setw()` function from the `<iomanip>` library to set the width of each column and
align them properly.
2. The program does not exit after three failed attempts. Calling the `main()` function
again recursively, can cause problems if the user keeps entering incorrect credentials.
*/

#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    string email = "foxtrotcomp@gmail.com";
    string password = "2023!fox";
    string input_email, input_password;
    int attempts = 0;
    bool login_success = false;
    // Prompt user for email and password
    while(attempts < 3 && !login_success) {
        cout << "\n\t\tEnter your email: ";
        getline(cin, input_email);
        cout << "\t\tEnter your password: ";
        getline(cin, input_password);
        // Check if the prompted inputs are valid
        if (input_email == email && input_password == password) {
            login_success = true;
            system("cls");
            cout << "\n\n\t\tLogin successful!\n\n";
            cout << "__________________________________________________________________________________\n" << endl;
            cout << setw(5) << "No." << setw(15) << "Department" << setw(18) << "Employee" << setw(22) << "Position" << setw(20) << "Status" << "\n" << endl;
            cout << setw(5) << "1" << setw(15) << "Marketing" << setw(20) << "Nick Spring" << setw(25) << "Marketing Manager" << setw(15) << "On Time" << endl;
            cout << setw(5) << "2" << setw(15) << "Finance"   << setw(20) << "Charlie Nelson"  << setw(25) << "Accountant Manager"  << setw(15) <<"On Time"<< endl;
            cout << setw(5) <<"3"<<setw(15)<< "Sales"<<setw(20)<< "Tara Olsson"<<setw(25)<< "Sales Manager"<<setw(15)<< "On Time"<<endl;
            cout<<setw(5)<<4<<setw(15)<< "Sales"<<setw(20)<< "Darcy Jones"<<setw(25)<< "Sales Coordinator"<<setw(15)<< "Late"<<endl;
            cout<<setw(5)<<5<<setw(15)<< "IT"<<setw(20)<< "Elle Xu"<<setw(25)<< "IT Manager"<<setw(15)<< "On Time"<<endl;
            cout<<setw(5)<<6<<setw(15)<< "Finance"<<setw(20)<< "Tao Argent"<<setw(25)<< "Sales Representative"<<setw(15)<< "Late"<<endl;
            cout << "__________________________________________________________________________________\n\n\n" << endl;

        }else{
            system("cls");
            cout<<"\n\n\tIncorrect email or password. Please try again.\n"<<endl;
            attempts++;
        }
    }
    // 3rd time unsuccessful attempts
    if (attempts == 3 && !login_success) {
       int seconds = 10;
        system("cls");
        /*
        Use the ternary operator: Instead of using an if-else statement to check if blink is
        even or odd, you can use the ternary operator (?:) to achieve the same result in a more
        concise way.
        */
            for (int seconds_left = seconds; seconds_left >= 0; seconds_left--) {
                cout << "\n\n\t\tToo many attempts. Please, wait for " << seconds_left << " seconds.";
                cout << (seconds_left % 2 == 0 ? " " : " ");
            for(int i=0; i<400000000; i++);
                system("cls");
            }
        /*
        Calling the main() function from within the switch statement is a bad habit.
        This can cause unexpected behavior and is generally not recommended. Instead, you can use a loop
        to keep asking the user if they want to log in again until they enter “0” to exit the program.
        */
        int input_login_again;
        do{
            while(true) {
                // Prompt user input for logging in again
                cout << "\nDo you want to try logging in again?" << endl;
                cout << "\n\t [1] YES\n\t [0] NO\n\n" << endl;
                cin >> input_login_again;
                cin.ignore(); // Clear the newline character from the buffer
                if (input_login_again == 0) {
                    system("cls");
                    cout << "\n\n\t\t>> PROGRAM CLOSED. HAVE A GREAT DAY! <<\n\n" << endl;
                    return 0;
                } else if (input_login_again == 1) {
                    system("cls");
                    main(); break;
                }
            }
        }while(input_login_again != 0 && input_login_again != 1);
    }

    return 0;
}