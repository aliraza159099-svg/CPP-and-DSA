#include <iostream>

using namespace std;
template <typename myNum> float m(myNum x, myNum y){
    return (x>y)?x:y;
}

int main()
{
    cout<<"The greatest No is : "<<m(1.2,3.5);
    return 0;
};
