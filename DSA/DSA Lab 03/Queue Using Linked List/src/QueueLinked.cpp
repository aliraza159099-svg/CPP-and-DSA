#include "QueueLinked.h"
#include <iostream>
#include <string>
using namespace std;

QueueLinked::QueueLinked()
{
    front = rear = NULL;
    counter = 0;
}

QueueLinked::~QueueLinked()
{
   while (!empty())
    dequeue(); //free each node memery



}
bool QueueLinked::empty() const{
    return counter == 0;
}
void QueueLinked::enqueue(double x){
    QNode* newNode = new QNode;
    newNode->data = x;
    newNode->next = NULL;
    if(empty())
        front = newNode; //first node
    else
        rear->next = newNode;//link with last current node
    rear = newNode;
    counter++;
}
double QueueLinked::dequeue(){
     if(empty()){
        cout <<"Queue is empty" <<endl;
        return -1;
}
    double x = front->data;
    QNode* nextNode = front->next;
    delete front;
    front = nextNode;
    counter--;
    return x;
}
int QueueLinked::length() const{
    return counter;
}
void QueueLinked::print() const{
    cout<<"front-->";
    QNode* curr = front;
    while (curr !=NULL){
        cout<<"\t"<< curr->data;
        curr = curr->next;

    }
    cout<<"\t<-- rear" <<endl;

}
