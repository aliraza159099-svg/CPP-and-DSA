#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
using namespace std;
#include <string>

class Animal{
    public:
        //default constructor
        Animal();
        //parametrized constructor
        Animal(string name, int age);
        virtual ~Animal();
        Animal& operator=(const Animal& other);

        //getter and the setter of name
        string get_name(){
            return name;
        };
        void set_name(string n){
            name = n;
        };

        //getter and the setter of age
        int get_age(){
            return age;
        }
        void set_age(int a){
            age = a;
        };
        //info method
        void get_info();

        string name;
        int age;



};

#endif // ANIMAL_H_INCLUDED
