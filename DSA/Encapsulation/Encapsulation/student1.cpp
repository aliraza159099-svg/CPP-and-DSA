// #include "student1.h"
#include <iostream>

Student::Student(string n, int r) {
    name = n;
    rollNumber = r;
}

void Student::displayDetails() {
    std::cout << "Student Name: "
              << name
              << ", Roll No: "
              << rollNumber
              << std::endl;
}