/*
    NAME    : DAYANDAYAN, MARY JEAN CAYLAN
    SECTION : BSIT 1G
    STRING STRUCTURE ACTIVITY WEEK 6
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, word;
    system("cls");
    cout << "\n\t\t\t Remove a Word from a String\n\n" << endl;

    cout << "Enter a string: ";
    getline(cin, sentence);
    cout << "\nEnter string to remove: ";
    cin >> word;

    // Finds the word that wants to remove then erase it
    size_t pos = sentence.find(word);
    if (pos != string::npos) {
        sentence.erase(pos, word.length() + 1);
    }

    cout << "\nThe final result: " << sentence << endl;
    return 0;
}
