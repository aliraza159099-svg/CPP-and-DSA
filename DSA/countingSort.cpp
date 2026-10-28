#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void countSort(vector<int> &arr){ // Added & to modify the original array if needed
    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> count(maxVal + 1, 0);
    
    //Loop goes up to the size of the array, not maxVal
    for(size_t i = 0 ; i < arr.size() ; i++){
        count[arr[i]]++; // Increment the frequency to catch duplicates
    }
    
    //Loop must go up to AND INCLUDING maxVal (<= maxVal)
    for(int j = 0 ; j <= maxVal ; j++){
        // Loop through the frequency count to print duplicates correctly
        while(count[j] > 0) { 
            cout << j << " ";
            count[j]--; 
        }
    }
}

int main(){
    vector<int> arr = {12,34,53,1,2,4,675,765,23,34,23};
    countSort(arr);
    return 0;
}
