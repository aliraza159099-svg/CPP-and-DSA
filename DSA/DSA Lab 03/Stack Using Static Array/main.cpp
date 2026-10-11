#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s1;
    //pushing some elements into the stack or inserting using push method
    s1.push(6.9);
    s1.push(7.9);
    s1.push(9.2);
    s1.push(10.32);
    s1.push(13.4);

    s1.print();
    cout << endl;
    cout << "Top element: " << s1.top() << endl;

    cout << "Popping an element: " << s1.pop() << endl;
    //how our stack look just after removing top elemet
    cout << "Stack after pop: ";
    s1.print();
    cout << endl;

    return 0;
}
