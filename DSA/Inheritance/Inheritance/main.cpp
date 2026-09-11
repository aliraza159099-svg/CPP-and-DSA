#include <iostream>
#include "animal.h"
using namespace std;

int main(){
    Animal a1;
    a1.displayDetails();
    a1.setAge(5);
    a1.setName("Dog");
    a1.displayDetails();
return 0;
};