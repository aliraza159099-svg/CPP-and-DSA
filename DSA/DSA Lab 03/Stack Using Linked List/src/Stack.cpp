#include "Stack.h"
#include <string>
using namespace std;
#include <iostream>

Stack::Stack()
{
    topNode = NULL;
}
//the destructor to manually free memory
Stack::~Stack()
{
    Nodeptr temp = topNode;
    while(temp!=NULL){
    //the next node's address is saving in nextNode before deleting the temp
    Nodeptr nextNode = temp->next;
    //delete the current node
    delete temp;
    temp = nextNode;
    }
}
//copy constructor in the linked list
Stack::Stack(const Stack& stack)
{
    // Initially, the copied stack is empty
    topNode = NULL;

    // If the original stack is empty, nothing is copied
    if (stack.topNode == NULL)
    {
        return;
    }

    // Create the first node
    topNode = new Node;
    topNode->data = stack.topNode->data;
    topNode->next = NULL;

    // Pointers to traverse both stacks
    Nodeptr srcTemp = stack.topNode->next;
    Nodeptr destTemp = topNode;

    while (srcTemp != NULL)
    {
        // Create a new node
        destTemp->next = new Node;
        destTemp = destTemp->next;

        // Copy data into the new node
        destTemp->data = srcTemp->data;
        destTemp->next = NULL;

        // Move to the next source node
        srcTemp = srcTemp->next;
    }
}

//checking the emptyness of the stack
bool Stack::empty() const{
    //if the top node isn't empty it will return true else fasle
    return topNode == NULL;
}
//function to add an element
void Stack::push(const double x)
{
    Nodeptr newNode = new Node;
    newNode->data = x;
    newNode->next = topNode;
    topNode = newNode;
}
//popping the top of the stack
double Stack::pop(){
if(topNode != NULL){
   Nodeptr temp;
   temp = topNode;//temp is pointing the top of the stack
   double value = temp->data;//the top that is going to pop is storing in the value
   topNode = temp->next;//topNode is pointing to the next of temp as the previous top is going to pop
   delete temp;// freeing the memory of the previous top now OS can assign that to any other
   return value;// the value is returning to the function call
}else{
    return -1;
}
}
//returning the top of the Stack to the top
double Stack::top()const{
if(topNode != NULL){
    return topNode->data;
}else{
    cout<<"The stack is empty"<<endl;
    return -1;
}
}
//printing the whole stack is here
void Stack::print()const{
    if(topNode!=NULL){
        Nodeptr temp;

        temp = topNode;
        cout<<"[ ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            if(temp->next!=NULL){
                cout<<" , ";
            }
            temp = temp->next;
        }
        cout<<" ]";
    }
}

