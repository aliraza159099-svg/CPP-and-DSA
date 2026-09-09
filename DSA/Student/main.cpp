#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    Student s1;
    cout <<"Student 1 info : "<<endl;
    s1.print_info();

    cout <<"Student 2 info : "<<endl;

    Student s2("Raza");
    s2.print_info();

    cout <<"Student 3 info : "<<endl;

    Student s3("Ali", 101);
    s3.print_info(); // Calling the method

    return 0;
}
