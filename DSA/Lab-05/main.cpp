#include <iostream>
#include <chrono>
/* Only needed for the sake of this example. */
#include <thread>
using namespace std;
#include <cstdlib>
#include <compare>

//function to copy the original array
// Function to copy the original array
int* copyArray(int arr[], int size) {
    int* newArray = new int[size];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    return newArray;
}




//the bubble algorithm
void bubbleSort(int arr[], int n) {
    // Outer loop runs n-1 times
    for (int i = 0; i < n - 1; i++) {
        // Inner loop does adjacent comparisons
        // As i increases, the last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//the insertion algorithm
void insertionSort(int arr[], int n){
    //starting from the elemet at the first index and comapring with the elements on the left side
    for(int i = 1; i < n ;i++ ){
        int temp = arr[i];//storing element at i in temp
        for(int j = i; j > 0 && temp < arr[j-1] ; j-- )//checks whether the the temp is smaller then the elements on the right of the array
        {
            arr[j] = arr[j-1];
            arr[j] = temp;
        }

    }
}


void long_operation()
{
    /* Simulating a long, heavy operation. */

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(150ms);
}

int main()
{
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    //taking the number of array elemets
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    //array
    int arr[size];
    //initializing the array elements
    for(int i = 0 ; i < size ; i++){
        arr[i] = rand() % 1000;
    }



    //calling the bubble sort
    //copying the original array
    int* arr1 = copyArray(arr,size);
    auto t1 = high_resolution_clock::now();
    bubbleSort(arr1, size);
    auto t2 = high_resolution_clock::now();

    /* Getting number of milliseconds as an integer. */
    auto ms_int = duration_cast<milliseconds>(t2 - t1);

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double = t2 - t1;

    cout << ms_int.count() << "ms\n";
    cout << ms_double.count() << "ms"<<endl;

    //end of the bubble sort

    for(int i = 0 ; i < size ; i++){
        cout<<arr1[i]<<" ";
    }

    //the insertion sort calling
    cout<<"Sorting by using the Insertion Algorithm"<<endl;
    //copying the original array
    int* arr2 = copyArray(arr, size);
    auto t3 = high_resolution_clock::now();
    insertionSort(arr, size);
    auto t4 = high_resolution_clock::now();

    /* Getting number of milliseconds as an integer. */
    auto ms_int_2 = duration_cast<milliseconds>(t4 - t3);

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double_2 = t4 - t3;

    cout << ms_int_2.count() << "ms\n";
    cout << ms_double_2.count() << "ms"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr1[i]<<" ";
    }
/**
    //the merge sort is calling here
    cout<<"Sorting by using the merge sorting "<<endl;
        //copying the original array
    int* arr2 = copyArray(arr, size);
    auto t3 = high_resolution_clock::now();
    insertionSort(arr, size);
    auto t4 = high_resolution_clock::now();

    //Getting number of milliseconds as an integer.
    auto ms_int_2 = duration_cast<milliseconds>(t4 - t3);

    // Getting number of milliseconds as a double.
    duration<double, std::milli> ms_double_2 = t4 - t3;

    cout << ms_int_2.count() << "ms\n";
    cout << ms_double_2.count() << "ms"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr1[i]<<" ";
    }

    **/




    return 0;
}
