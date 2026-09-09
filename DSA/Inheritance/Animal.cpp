#include <iostream>
#include "animal.h"
using namespace std;

//initialing the constructors
Animal::Animal()
{
    name = "Animal";
    age = 0;
};
Animal::Animal(string n, int a){
    name = n;
    age = a;
};

void Animal::get_info(){
    cout<<"The name of the animal is : "<<name<<endl;
    cout<<"The age of the animal is : "<<age<<endl;
};
