#include <iostream>
using namespace std;
// template <typename myNum> float m(myNum x, myNum y){
//     return (x>y)?x:y;
// }
// int main()
// {
//     cout<<"The greatest No is : "<<m(1.2,3.5);
//     return 0;
// };

template <typename data> void display(data x){
    cout<<"You entered : "<<x<<endl;
}
int main()
{
    int a = 5;
    display(a);
    string deatils = "My name is Ali Raza Balghari";
    display(deatils);
    display(5.4);
    display("I am learning CPP in these days.");
    return 0;
};
