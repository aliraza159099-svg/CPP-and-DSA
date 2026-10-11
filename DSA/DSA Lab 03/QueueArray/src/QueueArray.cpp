#include "QueueArray.h"
#include <iostream>
#include <string>
using namespace std;

QueueArray::QueueArray(int size)
{
    values = new double[size];
    maxsize = size;
    front = 0;
    rear = -1;
    counter = 0;

}

QueueArray::~QueueArray()
{
    delete[] values;
}
bool QueueArray::empty() const{
    return counter == 0;

}
bool QueueArray::full() const {
    return counter == maxsize;

}
void QueueArray::enqueue(double x){
    if(full()){
            cout << "Queue is full"<<endl;
            return;

       }
       rear = (rear + 1) % maxsize;
       values[rear] = x;
       counter++;
}
double QueueArray::dequeue() {
    if(empty()){
        cout <<"Queue is empty" <<endl;
        return -1;
    }
    double x = values[front];
    front = (front +1) % maxsize;
    counter--;
    return x;


}
int QueueArray::length() const{
    return counter;

}
void QueueArray::print() const{
    cout<<"front-->";
    for (int i=0; i < counter; i++)
        cout<<"\t" << values[(front + i)% maxsize];
    cout<<"\t<-- rear" << endl;


}
