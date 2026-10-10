#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    cout << "______________STACK USING STATIC ARRAY_____________" << endl;
    Stack s1;
    s1.push(6.9);
    s1.push(7.9);
    s1.push(9.2);
    s1.push(10.32);
    s1.push(13.4);
    //calling pop to delete the top element
    cout<<s1.pop()<<endl;
    s1.print();

    cout << "\n______________STACK USING STATIC ARRAY_____________" << endl;
    return 0;
}
