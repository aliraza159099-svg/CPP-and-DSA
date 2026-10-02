#include "List.h"
#include <string>
using namespace std;
#include <iostream>

List::List()
{
    head = NULL;
}

List::~List()
{
    Nodeptr temp = head;
    while(temp!=NULL){
    //the next node's address is saving in nextNode before deleting the temp
    Nodeptr nextNode = temp->next;
    //delete the current node
    delete temp;
    temp = nextNode;
    }
}

//copy constructor in the linked list
List::List(const List& other) {
    head = NULL;

    // if the other list is empty nothing will be copied
    if (other.head == NULL) {
        return;
    }
    // creating the first node and copying the head data
    head = new Node;
    head->data = other.head->data;
    head->next = NULL;
    // pointers to keep track of the source list and the new list
    Nodeptr srcTemp = other.head->next;
    Nodeptr destTemp = head;

    // the loop will execute until the end of the other list that is to be copied
    while (srcTemp != NULL) {
        // create a new node for the current position in the new list
        destTemp->next = new Node;
        // move destTemp to point to this newly created node
        destTemp = destTemp->next;
        // copy the data from the source list node to the new node
        destTemp->data = srcTemp->data;
        // set the next pointer of the new node to NULL
        destTemp->next = NULL;
        srcTemp = srcTemp->next;
    }
}
//checking whether the list is empty or not
bool List::empty() const {
    // If the head is NULL, return true, otherwise return false
    return head == NULL;
}
//returning the head element of the list
int List::headElement() const{
    if(head==NULL) return -1;
    return head->data;
}
//adding an element to the head of the list
void List::addHead(int nodeData) {
    Nodeptr newNode = new Node;
    newNode->data = nodeData;
    //the newNode will be the head the list
    newNode->next = head;
    head = newNode;
}
//deleting the head of the list
void List::delHead() {
    //if the head is empty the list is empty nothing will happen
    if (head == NULL) {
        return;
    }
    //if the list isn't empty then the current head point to the second node and delete the first node
    Nodeptr temp = head;
    head = temp->next;
    delete temp;
}

// The length of the list can be found in this way
int List::length() const {
    Nodeptr temp = head;
    int size = 0;

    // if the list is empty then the size will be one else the size of the list will be printed
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}
//printing the list
void List::print() const{
    Nodeptr temp = head;
    //if the list is empty nothing will be printed
    if(head==NULL){
        return;
    }
    //else the list will be printed
    else{
        cout<<"[ ";
        //the loop will execute untill the last node
        while(temp!=NULL){
            cout<<temp->data;
            //putting commas between the elements
            if(temp->next != NULL) cout<<" , ";
            temp = temp->next;
        }
        cout<<" ]"<<endl;
    }
}







