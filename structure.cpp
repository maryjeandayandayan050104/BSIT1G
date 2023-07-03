/*
    NAME    : DAYANDAYAN, MARY JEAN C.
    SECTION : BSIT 1G
    STRUCTURE
*/

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float prelimGrade;
    float midtermGrade;
    float finalGrade;
    float endTermGrade;
    string remark;
};

int main() {
    Student student;
    system("cls");
    cout << "\n\n\t\t\tGrade Report" << endl;
    cout << "Created by: DAYANDAYAN, MARY JEAN C.\n" << endl;
    cout << "Enter the Name of the Student\t: ";
    getline(cin, student.name);
    cout << "Enter the Age of the Student\t: ";
    cin >> student.age;
    cout << "Enter the Prelim Grade\t\t: ";
    cin >> student.prelimGrade;
    cout << "Enter the Midterm Grade\t\t: ";
    cin >> student.midtermGrade;
    cout << "Enter the Endterm Grade\t\t: ";
    cin >> student.finalGrade; 

    // Compute the Student Grade
    student.endTermGrade = (student.prelimGrade + student.midtermGrade + student.finalGrade) / 3;
    if (student.endTermGrade >= 75) {
        student.remark = "Passed";
    } else {
        student.remark = "Failed";
    }

    cout << "\n\n**********************Generated Report**************************\n" << endl;
    cout << "Student Name\t: " << student.name << endl;
    cout << "Student Age \t: " << student.age << "\n" << endl;
    cout << "The Student Grade is " << student.endTermGrade;
    cout << "\t\tRemarks: " << student.remark << "\n\n" << endl;
    return 0;
}