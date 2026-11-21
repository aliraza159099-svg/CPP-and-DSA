#include "Heap.h"

Heap::Heap()
{
    heap_size = 0;
    array_size = 3;
    array = new double[array_size];
}

Heap::~Heap()
{
    delete[] array;
}

//return false if the heap is empty
bool Heap::empty()const{
    //if the heap size is 0 return true else fasle
    return heap_size == 0;
}

void Heap::insert(const double x){
    //if the size of the current heap reaches the size upscale the array size
    if(heap_size == array_size -1){
        int newsize = array_size*2;

        double* newArray = new double[newsize];
        //copying the existing elements into the new array
        for(int i = 1 ; i < array_size ; i++){
            newArray[i] = array[i];
        }
        //delete the old array
        delete array;
        array = newArray;
        array_size = newsize;
    }
    int hole = ++heap_size;
    for(; hole > 1 && x < array[hole/2] ; hole/=2){
        array[hole] = array[hole/2];
    }
    array[hole] = x;
}

//method to return the root of the heap
double Heap::root(){
    //the first element in the heap will be the root
    return array[1];
}

//the method to delete the min using the per_plate down method
void Heap::deleteMin(){
    //override the current min with the last element and reduced the size of the heap
    array[1] = array[heap_size--];
    perplate(1);
}
void Heap::perplate(int hole){
    int child;
    double temp = array[hole];
    for(;hole * 2 <= heap_size ; hole = child){
        child = 2 * hole;
        //this condition check whether the right child is smaller or the left, if the right is smaller the child will increase by one
        if(child != heap_size && array[child+1] < array[child]){
            child++;
        }
        if(array[child] < temp){
            array[hole] = array[child];
        }else
        {
            break;
        }
    }
    array[hole] = temp;
}
//the sorting algorithm for the heap sorting
double* Heap::sort(){
    double num;
    int count = 1;
    double* newArray = new double[heap_size];
    while(heap_size>0){
        newArray[count] = array[1];
        count++;
        deleteMin();
    }
    return newArray;
}




