#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    float b = 5.5;
    float *ptr2 = &b;
    float **ptr3 = &ptr2;
    cout << "Value of b: " << b << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Value of ptr3: " << ptr3 << endl;
    cout << "Value pointed to by ptr3: " << **ptr3 << endl;

    return 0;
}