#include "Stack.h"
using namespace std;
#include <iostream>
Stack::Stack()
{
    //ctor
}

Stack::~Stack()
{
    //dtor
}

 //copy constructor
Stack::Stack(const Stack& stack) {
    topIndex = stack.topIndex;
    // Copy elements from the original stack's array to this object's array
    for(int i = 0; i <= topIndex; i++) {
        arr[i] = stack.arr[i];
    }
}
 //the method checking the array is empty or not
 bool Stack::empty() const{
     //if top is negative the array is empty
    return (topIndex < 0);
 }
 //push function
 void Stack::push(const double num){
    if(size - 1 == topIndex){
        cout<<"No space to add new elements: "<<endl;
        return;
    }else{
        topIndex = topIndex + 1;
        arr[topIndex] = num;
        // cout<<"Item added successfully"<<endl;
    }
}
//pop funtion to remove the top elemet from the list
double Stack::pop(){
    if(topIndex<0){
        cout<<"No elements: "<<endl;
        return -1;
    }else{
        topIndex = topIndex - 1;
        cout<<"Item removed successfully : ";
        //returming the very top element that has been removed now
        return arr[topIndex+1];
    }
}
//printing the top of the list
double Stack::top()const{
    if(topIndex<0){
        cout<<"There is no elemet in the lsit"<<endl;
        return -1;
    }else{
        return arr[topIndex];
    }
}
//printing the list of elements
void Stack::print() const{
    if(topIndex < 0) return;
    else{
            cout<<"[ ";
        for(int i = 0 ; i <= topIndex ; i++){
            cout<<arr[i];
            if(i < (topIndex)){
                cout<<" , ";
            }
        }
            cout<<" ]";
    }
}
