#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
    public:
    //constructor
        Student(string n, int a){
            name = n;
            age = a;
        };
        void details(){
            cout<<"The name of the student is :"<<name<<
            "\nHe is "<< age <<
            " years old ";
        };
};

int main(){
    Student s1("Ali",19);
    s1.details();
    return 0;
};