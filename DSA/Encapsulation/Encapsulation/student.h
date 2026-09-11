#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    // Constructor declaration
    Student(string n, int r);

    // Method declaration
    void displayDetails();
};

#endif