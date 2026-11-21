#include <iostream>
#include "Heap.h"
using namespace std;
#include <vector>
#include <random>

int main()
{
    Heap h1;
    cout<<"Is the heap empty : "<<h1.empty()<<endl;
    cout<<"========= Inserting known elements in to the heap =========="<<endl;
    h1.insert(80.83);
    h1.insert(20.3);
    h1.insert(90.00);
    h1.insert(40.45);
    h1.insert(60.2);
    cout<<"What is the root : "<<h1.root()<<endl;
    h1.deleteMin();
    cout<<"Root after deleting the previous root : "<<h1.root()<<endl;
    cout<<"========= Inserting random elements in to the heap =========="<<endl;

    vector <double> numbers;
    for(int i = 0 ; i < 100 ; i++){
        double randNum = rand()%1000;
        numbers.push_back(randNum);
    }
    for(double var : numbers){
        h1.insert(var);
    }
    h1.insert(80.83);
    h1.insert(20.3);
    h1.insert(90.00);
    h1.insert(40.45);
    h1.insert(60.2);
    cout<<"What is the root : "<<h1.root()<<endl;
    h1.deleteMin();
    cout<<"Root after deleting the previous root : "<<h1.root()<<endl;
    cout<<"Sorting the array : "<<endl;
    double* newArray;
    newArray = h1.sort();
    for(int i = 1 ; i < 100 ; i++){
        cout<<newArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}
