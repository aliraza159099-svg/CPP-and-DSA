#include <iostream>
#include <vector>

using namespace std;
int main(){
   vector<char> myVec = {'a','r','t','y','w'};
   cout<<"Size of your vector is : "<<myVec.size()<<endl;
   myVec.push_back('b');
   cout<<"Size of your vector after push is : "<<myVec.size()<<endl;
   for(char ch : myVec){
    cout<<ch<<" ";
   }
   //pop_back to delete the last element from the vector
   myVec.pop_back();
   cout<<"Size of your vector after back is : "<<myVec.size()<<endl;
   for(char ch : myVec){
    cout<<ch<<" ";
   }
   //to print the front value we use
   cout<<"\n The first character is : "<<myVec.front()<<endl;

   cout<<"\n The end character is : "<<myVec.back()<<endl;

   cout<<"\n The Capacity of the vector is : "<<myVec.capacity()<<endl;
   myVec.push_back('o');

}; // namespace std;
