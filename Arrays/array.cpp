#include <iostream>
using namespace std;
int main(){
cout<<"---------CPP main Array class--------"<<endl;
int arr[8] = {2,3,4,5,6,7,8,9};
cout<<arr<<endl;
for (int i = 0 ; i<8 ; i++)
{
    //pointer arithematics
    cout<< *(arr + i)<<endl;
}
return 0;
}
