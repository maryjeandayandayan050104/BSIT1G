/*
    NAME    : DAYANDAYAN, MARY JEAN CAYLAN
    SECTION : BSIT 1G
    STRING FINALS LABORATORY ACTIVITY WEEK 5
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    int vowel_count = 0;
    int consonant_count = 0;
    int digit_count = 0;
    int whitespace_count = 0;

    cout << "\n\n\t\tVowels, Consonants, Digits, and Whitespace Counter\n" << endl;
    cout << "Enter a String: => ";
    getline(cin, sentence);

    for (char c : sentence) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }else if(isdigit(c)){
            digit_count++;
        }else if(isspace(c)){
            whitespace_count++;
        }
    }

    cout << "\n\n******* SUMMARY OF REPORTS *******\n\n" << endl;
    cout << "Number of Vowels        : =>\t" << vowel_count << endl;
    cout << "Number of Consonants    : =>\t" << consonant_count << endl;
    cout << "Number of Digits        : =>\t" << digit_count << endl;
    cout << "Number of Whitespace    : =>\t" << whitespace_count << endl;
    cout << "\nThank you for using this software.\n" << endl;
    return 0;
}
