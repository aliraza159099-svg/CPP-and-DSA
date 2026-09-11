// Student.cpp
#include "student.h"  // Notice the quotes "" for local files instead of <>
#include <iostream>

// The :: symbol means "displayDetails belongs to the Student class"
Student::Student(string n, int r) {
    name = n;
    rollNumber = r;
}

void Student::displayDetails() {
    std::cout << "Student Name: " << name << ", Roll No: " << rollNumber << std::endl;
}

