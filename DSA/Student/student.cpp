
#include <iostream>
#include "student.h"
using namespace std;

//default constructor
Student::Student()
{
    name = "Unknown";
    rollNo = 0;
}

//perimetrized operator
Student::Student(string n)
{
    name = n;
    rollNo =  0;
}
Student::Student(string n,int r)
{
    name = n;
    rollNo =  r;
}
//destructor
Student::~Student()
{
}

void Student::print_info()
{
    cout <<"The name of the student is : " << get_name() << endl;
    cout <<"The rollno of the student is : "<< get_rollNo()<<endl;
}
//methods getters
string Student::get_name(){
    return name;
}
int Student::get_rollNo(){
    return rollNo;
}

//methods  setters
void Student::set_name(string n){
    name = n;
}
void Student::set_rollNo(int r){
    rollNo = r;
}




