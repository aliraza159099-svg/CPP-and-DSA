//implementation class
#include "animal.h"
#include <iostream>
//default
//default constructor
Animal::Animal()
{
    name = "Unknown";
    age = 0;
}
Animal::Animal(string name, int age) {
    this->name = name;
    this->age = age;
}

void Animal::setName(string n){
    name = n;
}
void Animal::setAge(int a){
    age = a;
}

string Animal::getName(){
    return name;
}

int Animal::getAge(){
    return age;
}

void Animal::displayDetails(){
    cout <<"Oh! I am "<<name<<
    " I am really I hope "<<age<<
    " years old";
}


