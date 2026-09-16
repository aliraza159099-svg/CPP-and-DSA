#include <iostream>
#include "Box.h"

using namespace std;

template <class T>
Box<T>::Box(T a){
    value = a;
}

template <class T>
void Box<T>::display()
{
    cout << "Value: " << value << endl;
}
