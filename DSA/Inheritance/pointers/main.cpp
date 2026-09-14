#include <iostream>

using namespace std;

int main()
{
    //pointers in cpp static
    int a;
    a = 3;
    cout<<"Value : "<<a<<endl;
    cout<<"Address : "<< &a<<endl;
    int* ptr = &a;
    cout<<"Address : "<< ptr<<endl;
    //dynamic pointers
    int* dptr = new int(10);
    cout<<"Value : "<< *dptr<<endl;
    cout<<"Address : "<< &a<<endl;
    delete dptr;
    return 0;
}
