/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment: 	Assignment # 5
** File: 	GraeningArikaP78.cpp
** Description: P7.8 Students 
**
** Author: 	Arika Graening
** Date: 	28SEP42
** -------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure to hold student information
struct Student {
    string first_name;
    string last_name;  
    char grade;        
};

int main() {
    vector<Student> students;  

    // Declare variables
    string first_name, last_name;  
    char grade;  

    cout << "Enter student's first name, last name, and grade. Using spaces between. Type 'end' to finish\n";

    while (true) {
        // Get user input
        cout << "Student's details: ";
        cin >> first_name;  // Read the first name

        // When student list is complete, end input and continue program
        if (first_name == "end") {
            break;
        }

        cin >> last_name >> grade;

        // Student object
        Student student;  
        student.first_name = first_name; 
        student.last_name = last_name;     

         // Add the student to the vector
        students.push_back(student);  
    }

    // Print students sorted by grade
    cout << "\nStudents with grade A:\n";
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].grade == 'A') {
            cout << students[i].first_name << " " << students[i].last_name << endl;
        }
    }
    cout << "\nStudents with grade B:\n";
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].grade == 'B') {
            cout << students[i].first_name << " " << students[i].last_name << endl;
        }
    }
    cout << "\nStudents with grade C:\n";
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].grade == 'C') {
            cout << students[i].first_name << " " << students[i].last_name << endl;
        }
    }
    cout << "\nStudents with grade D:\n";
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].grade == 'D') {
            cout << students[i].first_name << " " << students[i].last_name << endl;
        }
    }
    cout << "\nStudents with grade F:\n";
    for (int i = 0; i < students.size(); ++i) {
        if (students[i].grade == 'F') {
            cout << students[i].first_name << " " << students[i].last_name << endl;
        }
    }
    return 0;
}