#include <iostream>
using namespace std;

template <class T1,class T2>
class Entity
{
    string name;
    T1 age;
    T2 weight;
    public:
        Entity(string n, T1 a, T2 w){
            name = n;
            age = a;
            weight = w;
    }
    void details(){
        cout<<"The name is : "<<name<<endl<<
        "Age is : "<<age<<endl<<
        "Weight is : "<<weight<<endl;
    }
};

int main()
{
    Entity<int,float> e1("Raza",19,57.5);
    e1.details();
    return 0;
}