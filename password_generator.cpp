/*
The password generator is a program that can create a random password
for the user based on some criteria. For example, the user can specify the length
of the password and the types of characters to include, such as lowercase letters,
uppercase letters, digits, and symbols. The program would then use a loop to
generate a random password by selecting characters from a string that contains all
the possible characters. The program would also display the password on the screen
for the user.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function to generate a random password
string generatePassword(int length, bool lower, bool upper, bool digit, bool symbol) {
  // string that contains all the possible characters
  string characters = "";
  // string that will store the password
  string password = "";

  // add lowercase letters to characters if lower is true
  if (lower) {
    characters += "abcdefghijklmnopqrstuvwxyz";
  }

  // add uppercase letters to characters if upper is true
  if (upper) {
    characters += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  }

  // add digits to characters if digit is true
  if (digit) {
    characters += "0123456789";
  }

  // add symbols to characters if symbol is true
  if (symbol) {
    characters += "!@#$%^&*()_+-={}[];:'\"<>,.?/";
  }

  // get the size of characters
  int size = characters.size();

  // use current time as seed for random number generator
  srand(time(0));

  // loop length times
  for (int i = 0; i < length; i++) {
    // generate a random index from 0 to size - 1
    int index = rand() % size;
    // append the character at that index to password
    password += characters[index];
  }

  // return the password
  return password;
}

// main function
int main() {
  // declare variables to store user input
  int length;
  bool lower, upper, digit, symbol;

  // ask the user for the length of the password
  cout << "Enter the length of the password: ";
  cin >> length;

  // ask the user whether to include lowercase letters
  cout << "Include lowercase letters? (1 for yes, 0 for no): ";
  cin >> lower;

  // ask the user whether to include uppercase letters
  cout << "Include uppercase letters? (1 for yes, 0 for no): ";
  cin >> upper;

  // ask the user whether to include digits
  cout << "Include digits? (1 for yes, 0 for no): ";
  cin >> digit;

  // ask the user whether to include symbols
  cout << "Include symbols? (1 for yes, 0 for no): ";
  cin >> symbol;

  // call the generatePassword function and store the result in a variable
  string password = generatePassword(length, lower, upper, digit, symbol);

  // display the password on the screen
  cout << "Your password is: " << password << endl;

  // end the program
  return 0;
}