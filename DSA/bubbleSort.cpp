#include <iostream>
using namespace std;
#include <vector>
void bubble(vector<int> &arr){
    int size = arr.size();
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int> arr = {12,34,53,1,2,4,675,765,23,23};
    bubble(arr);
    for(int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}