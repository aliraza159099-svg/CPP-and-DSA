
// Student.h
#ifndef STUDENT_H   // "Header guards" prevent the file from being loaded twice
#define STUDENT_H
using  namespace std;

#include <string>

class Student {
private:
    string name;
    int rollNumber;

public:
    // Constructor declaration
    Student(string n, int r);

    // Method declaration
    void displayDetails();
};

#endif
