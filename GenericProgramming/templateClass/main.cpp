#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    Box<int> b1(10);
    Box<float> b2(2.7f);

    b1.display();
    b2.display();

    return 0;
}
