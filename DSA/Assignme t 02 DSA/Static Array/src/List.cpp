#include "List.h"
#include <string>
using namespace std;
#include <iostream>
List::List()
{
    //at the beginning the size is 0
    size = 0;
}
//the destructor of the static array
List::~List()
{
    //no need of logic as its a static array handling automatically
}
//copy constructor
List::List(const List& L){
    //size of the L is copied in the size
    size = L.size;
    if(size!=0){
        for(int i = 0 ; i < size ; i++){
            head[i] = L.head[i];
        }
    }
}
//checking whether the list is empty or not
bool List::empty() const{
    //return true if its empty else false
    return size == 0;
}
//headelement
int List::headElement() const{
if(size != 0) return head[0];
else return -1;
}
//adding an element to the head of the array
void List::addHead(int num){
    for(int i = size ; i > 0 ; i--){
            //copying the array elements one step to the right
            head[i] = head[i-1];
    }
            //declaring head as num
            head[0] = num;
            size++;
}
//deleting the head of the list
void List::delHead(){
    if (empty()) {
        return;
    }
    for(int i = 0 ; i< (size - 1); i++){
        head[i] = head[i+1];
    }
    size--;
}
//length of the list
int List::length() const {
    return size;
}

// Display the list in format: [elem1, elem2, elem3]
void List::print() const {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << head[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
