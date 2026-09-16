// #include <iostream>

// using namespace std;

// template <class T>
// //T is the placeholder for the type of data
// //yet we don't know about its type its will be decided on the time of obj creation
// class Vector{
//     T  age;
//     public:
//     Vector(T  a){
//         age = a;
//         cout<<"Age is : "<<age<<endl;
//     }
// };
// int main()
// {
//     Vector <float> fVec(2.7);//making T type as float
//     Vector <int> iVec(20);//making T type as an int

//     return 0;
// };

#include <iostream>
using namespace std;

template <class T>
class Box
{
    T value;

public:

    Box(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Box<int> b1(10);
    Box<float> b2(2.7f);
    Box<string> b3("Raza");

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
