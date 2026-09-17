#include <iostream>
#include <vector>
using namespace std;


int main(){
    //ways to initialised the vectors
    vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    for(int i : vec){
        cout<<i<<" ";
    }
    //way 2 initialized every vector by 2 and we have 5 vectors
    vector<float> fvec(5,2);
    for(int i : fvec){
        cout<<i<<" ";
    }

    return 0;
};
