#include "DList.h"
#include <iostream>

using namespace std;

DList::DList()
{
    createDummyHead();
}

DList::~DList()
{
    //Clear The list
    Clear();
    //Delete Dummy Node
    //Write your code between these lines only
    //---------------------------
    delete head;
    //---------------------------
}

// copy constructor
DList::DList(const DList& other)
{
    //Initialize current list
    createDummyHead();
    //Check if other list is empty (if empty do nothing)
    if(other.empty())
        return;
    //Iterate through all the nodes of other list
    //and add all data elements to current list
    Nodeptr other_curr = other.head->next;
    Nodeptr other_head = other.head;

    //Write your code between these lines only
    //---------------------------
    while(other_curr != other.head)
    {
        //create a new node for the new list
        Nodeptr newnode = new Node;
        newnode->data = other_curr->data;

        newnode->next = head;
        newnode->prev = head->prev;
        //the next of the previous last element is the new Node
        (head->prev)->next = newnode;
        //the previous of the dummy is also the newNode
        head->prev = newnode;

        other_curr = other_curr->next;
    }
    //---------------------------
}

// boolean function
bool DList::empty() const
{
    //Write your code between these lines only
    //---------------------------
    //TODO
    //if only dummy is pointing to itself then it means there is no other element in the lsit
    return (head->next == head);
    //---------------------------
}

// access head element
int DList::headElement() const
{
    if(!empty())
        return head->next->data;
    cerr<<"List is Empty";
}

// access tail element
int DList::tailElement() const
{
    if(!empty())
        return head->prev->data;
    cerr<<"List is Empty";
}

// access element at specific index
int DList::getAt(int idx)
{
    Nodeptr pos = goToIndex(idx);
    if(pos != NULL)
    {
    //Write your code between these lines only
    //---------------------------
    //returning the data at the pos or the index
    return pos->data;
    //---------------------------
    }
}

// add to the head
void DList::addHead(int newdata)
{
    //Location to insert Head Node,
    //Between DummyHead and Actual First Node
    Nodeptr curr = head->next;

    //Create New Node
    //Write your code between these lines only
    //---------------------------
    //TODO
    //a new node will be created
    Nodeptr newNode = new Node;

    //---------------------------

    //Populate the new created node
    //Write your code between these lines only
    //---------------------------
    //TODO
    newNode->data = newdata;
    //---------------------------

    //Link the new created node
    //Write your code between these lines only
    //---------------------------
    //TODO
    //set the pointers after the creation of the new Node
    newNode->next = curr;
    newNode->prev = head;
    head->next = newNode;
    curr->prev = newNode;
    //---------------------------
}

// delete the head
void DList::delHead()
{
    //Check if list is empty ? Do nothing
    if(empty())
        return;
    //Location to delete Head Node,
    //Just after DummyHead
    Nodeptr curr = head->next;
    //Update references
    //Write your code between these lines only
    //---------------------------
    head->next = curr->next;
    (curr->next)->prev = head;
    //---------------------------

    //Free Node Memory on Heap
    //Write your code between these lines only
    //---------------------------
    delete curr;
    //---------------------------

}

// add to the tail
void DList::addTail(int newdata)
{
    //Location to insert Head Node,
    //Between DummyHead and Actual Last Node
    Nodeptr curr = head;
    //Create New Node
    Nodeptr newnode = new Node;
    //Populate the new created node
    //Write your code between these lines only
    //---------------------------
    newnode->data = newdata;
    //---------------------------

    //Link the new created node
    //Write your code between these lines only
    //---------------------------
    newnode->prev = curr->prev;//thee previous of the newNode is the previous of the dummy
    (curr->prev)->next = newnode;//the next of the previous end will be the newNode
    //the next of the newNode is the dummy
    newnode->next = head;
    head->prev = newnode;

    //---------------------------

}

// delete the head
void DList::delTail()
{
    //Check if list is empty ? Do nothing
    if(empty())
        return;
    //Location to delete Tail Node,
    //Just Before DummyHead
    Nodeptr curr = head->prev;
    //Update references
    //Write your code between these lines only
    //---------------------------
    curr->prev->next = head;
    head->prev = curr->prev;
    //---------------------------

    //Free Node Memory on Heap
    //Write your code between these lines only
    //---------------------------
    delete curr;
    //---------------------------

}

// add to the head
void DList::addAt(int idx, int newdata)
{
    //Get node at current position
    Nodeptr curr = goToIndex(idx);
    if(curr == NULL)    //Index exceed size
        return;

    //Create New Node
    //Write your code between these lines only
    //---------------------------
    Nodeptr newNode = new Node;
    //---------------------------

    //Populate the new created node
    //Write your code between these lines only
    //---------------------------
    newNode->data = newdata;
    //---------------------------

    //Link the new created node
    //Write your code between these lines only
    //---------------------------
    newNode->prev = curr->prev;//the prev of the new node should be the previous of the current
    newNode->next = curr;//the next node of the newNode is the current itself
    curr->prev->next = newNode;//the next of the previous of the current should be the newnode
    curr->prev = newNode;//the previous of the curr is the newnode
    //---------------------------

}

// delete element at particular index number
void DList::delAt(int idx)
{
    //Get node at current position
    Nodeptr curr = goToIndex(idx);
    if(curr == NULL)    //Index exceed size
        return;

    //Update references
    //Write your code between these lines only
    //---------------------------
    curr->prev->next = curr->next;//the next of the previous of the current should be the next of the current
    curr->next->prev = curr->prev;//the prev of the next of the current node should be the previous of the current
    //---------------------------

    //Free Node Memory on Heap
    //Write your code between these lines only
    //---------------------------
    delete curr;
    //---------------------------


}

// utility function to get length of list
int DList::length() const
{
    //Write your code between these lines only
    //---------------------------
    Nodeptr temp = head->next;
    int count = 0;
    //counting the number of the node
    while(temp!=head){
        count++;
        temp=temp->next;
    }
    //return the length of the list as count having the number of nodes
    return count;
    //---------------------------

}

// display the list
void DList::print() const
{
    //Set the starting point of list
    Nodeptr curr = head->next;
    cout << "[";
    //Iterate and display list.
    //Make sure to handle comma ',' seperation is correct
    if(!empty()){
        cout << curr->data;
        curr = curr->next;
    }
    while(curr != head){
        cout << ", " << curr->data;
        curr = curr -> next;
    }
    cout << "]" << endl;
}

// Add dummy Head and populate
void DList::createDummyHead()
{
    head = new Node;
    head->next = head;
    head->prev = head;
}

// Clear The List
void DList::Clear()
{
    while(!empty())
        delHead();
}

//Go to specific index and return poiter to node at that position
//Indexing is zero based
Nodeptr DList::goToIndex(int idx)
{
    if(idx > length())
    {
        cerr<<"Error! Given index exceed the size of list";
        return NULL;
    }

    //Iterate uptill given index
    Nodeptr curr = head->next;
    //Write your code between these lines only
    //---------------------------
    //TODO
    //here we are finding the the address of the current node from the index number
    int i = 0;
    while(i < idx){
        curr = curr->next;
        i++;
    }
    //---------------------------
    //returning the curr
    return curr;
}

