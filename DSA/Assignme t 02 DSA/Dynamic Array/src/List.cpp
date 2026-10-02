#include "List.h"
#include <iostream>

using namespace std;

// Constructor
List::List() {
    size = 0;
    list_elements = nullptr;
}

// Destructor
List::~List() {
    //destructing the whole array manually as the dynamic array doesn't handle by the memory as the static array does.
    delete[] list_elements;
}

// Copy Constructor
List::List(const List& L) {
    //the size of the list should be equal to the size of the copying list
    size = L.size;
    //if size is 0 nothing will be copied
    if (size == 0) {
        list_elements = nullptr;
    } else {
        //else a new list is created and the elements are copied into it
        list_elements = new int[size];
        for (int i = 0; i < size; i++) {
            list_elements[i] = L.list_elements[i];
        }
    }
}

// Check if empty, if the list is empty then we have true else false in return
bool List::empty() const {
    return size == 0;
}

// Getting the first element of the list by the index element
int List::headElement() const {
    if (empty()) return -1;
    return list_elements[0];
}

// Add element to head of the existing list
void List::addHead(int newValue) {
    //a new list is created with size = size+1 as it will have an extra element that is going to add.
    int* newList = new int[size + 1];
    for (int i = size; i > 0; i--) {
        //by using the reverse loop all the elements are shifted one to right
        newList[i] = list_elements[i - 1];
    }
    newList[0] = newValue;
    delete[] list_elements;

    list_elements = newList;
    size++;
}

// Delete the head element of the dynamic array
void List::delHead() {
    //if size is zero nothing will be deleted
    if (size == 0) return;
    //if the size is just one means we have a single element in the list we have to delete the array the keep its size 0
    if (size == 1) {
        delete[] list_elements;
        list_elements = nullptr;
        size = 0;
        return;
    }
    //in case of 2 or more elements we are going to make a new array and copy the elements except the head in to the new list
    int* newList = new int[size - 1];

    // Shifting the elements to the left skipping the 0 index element
    for (int i = 0; i < size - 1; i++) {
        newList[i] = list_elements[i + 1];
    }

    // Clean up the OLD array block
    delete[] list_elements;

    list_elements = newList;
    size--;
}

// Return length of the list by the current value of size
int List::length() const {
    return size;
}

// Printing the output of the array
void List::print() const {
    //if the list is empty nothing will be printed
    if(empty()) return;
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << list_elements[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;
}
