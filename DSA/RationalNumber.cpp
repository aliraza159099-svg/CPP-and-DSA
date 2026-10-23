#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    cout<<"Addition of ist rational numbers"<<endl;
    Rational r1(12,13);
    Rational r2(2,3);
    Rational sum = r1.Add(r2);
    sum.displayRational();

    cout<<"\nAddition of 2nd rational numbers"<<endl;
    Rational r3(1,43);
    Rational r4(2,43);
    Rational sum2 = r3.Add(r4);
    sum2.displayRational();

    cout<<"\nMultiplication of 1st rational numbers"<<endl;
    Rational mul1= r1.Multiplication(r2);
    mul1.displayRational();
    return 0;
}
