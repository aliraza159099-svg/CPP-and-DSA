

#ifndef Animal_H
#define Animal_H

#include <string>
using namespace std;

class Animal {
    // Constructor declaration
    public:
    void setName(string name);
    void setAge(int age);

    string getName();
    int getAge();

    Animal();
    Animal(string name, int age);

    // Method declaration
    void displayDetails();

    private:
    string name;
    int age;

};
class Pets: public Animal{
    public:
    void myDetails();
    Pets();
}

#endif
