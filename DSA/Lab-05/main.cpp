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
void insertionSort(int arr2[], int n){
    //starting from the element at the first index and comparing with the elements on the left side
    for(int i = 1; i < n ;i++ ){
        int temp = arr2[i];//storing element at i in temp
        for(int j = i; j > 0 && temp < arr2[j-1] ; j-- )//checks whether the the temp is smaller then the elements on the right of the array
        {
            arr2[j] = arr2[j-1];
            arr2[j] = temp;
        }

    }
}
//the merge sort divide and conqure rule

//the algorithm to merge the sort in order
void merge(int arr[], int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = 0;

    int temp[end - start + 1];

    // Compare both halves
    while (i <= mid && j <= end) {
        //if the element in the right side is smaller then it will stire in the temp
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            //the i pointer is increment so it start pointinf to the next element
            i++;
        }
        else {
            //if the element on the right side is smaller then it will store in the temp
            temp[k] = arr[j];
            //j is increasing so that it start pointing to the next on right side
            j++;
        }
        //in both of the cases the k is increasing
        k++;
    }

    // Copy remaining left elements
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining right elements
    while (j <= end) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temporary array back
    for (i = start, k = 0; i <= end; i++, k++) {
        arr[i] = temp[k];
    }
}

//the merge sort algorithm
void mergeSort(int arr[],int start, int end){
    //stop calling if the end is greater then the start
    if(end > start){
            //taking the mid by mid formula
        int mid = (start + end)/2;
    //calling the mergeSort for the left side
        mergeSort(arr, start, mid);
        //calling the mergeSort for the right side of the list we have
        mergeSort(arr, mid + 1, end);
        //calling the merge to merge the elements
        merge(arr, start, mid, end);
    }
}
// Partition function using Hoare's partition scheme
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choose the first element as pivot
    int p = low - 1;
    int q = high + 1;

    while (true) {
        // Find leftmost element greater than or equal to pivot
        do {
            p++;
        } while (arr[p] < pivot);

        // Find rightmost element smaller than or equal to pivot
        do {
            q--;
        } while (arr[q] > pivot);

        // If pointers cross, partition is complete
        if (p >= q)
            return q;

        // Swap elements
        int temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
    }
}

// QuickSort Algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the split point index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
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
    cout<<endl;

    //the insertion sort calling
    cout<<"Sorting by using the Insertion Algorithm"<<endl;
    //copying the original array
    int* arr2 = copyArray(arr, size);
    auto t3 = high_resolution_clock::now();
    insertionSort(arr2, size);
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
    //the merge sort is calling here
    cout<<"\nSorting by using the merge sorting "<<endl;
        //copying the original array
    int* arr3 = copyArray(arr, size);
    auto t5 = high_resolution_clock::now();
    mergeSort(arr3, 0, size - 1);
    auto t6 = high_resolution_clock::now();

    //Getting number of milliseconds as an integer.
    auto ms_int_3 = duration_cast<milliseconds>(t6 - t5);

    // Getting number of milliseconds as a double.
    duration<double, std::milli> ms_double_3 = t6 - t5;

    cout << ms_int_3.count() << "ms\n";
    cout << ms_double_3.count() << "ms"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr3[i]<<" ";
    }


    //calling the quick sort method
    cout<<"\nSorting by using the Quick sorting "<<endl;
    //copying the original array
    int* arr4 = copyArray(arr, size);
    auto t7 = high_resolution_clock::now();
    quickSort(arr4, 0, size - 1);
    auto t8 = high_resolution_clock::now();

    //Getting number of milliseconds as an integer.
    auto ms_int_4 = duration_cast<milliseconds>(t8 - t7);

    // Getting number of milliseconds as a double.
    duration<double, std::milli> ms_double_4 = t8 - t7;

    cout << ms_int_4.count() << "ms\n";
    cout << ms_double_4.count() << "ms"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr4[i]<<" ";
    }


    return 0;
}
