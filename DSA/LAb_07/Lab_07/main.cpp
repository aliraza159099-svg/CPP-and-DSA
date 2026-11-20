#include <iostream>
#include "BST.h"
#include <vector>
#include <random>

using namespace std;

int main() {

    cout<<"========== Checking outputs for the manually created vector ============="<<endl;
    //a vector is manually created
    std::vector<int> knownArray = {2,48,75,23,76,26,86,53,67,31};
    //a tree for int is created to test the tree
    BST<int> tree1;
    //inserting all the elements in the tree
    for(int var : knownArray){
        tree1.insert(var);
    }
    //manually checking whether an element is in the tree or not
    bool present = false;
    present = tree1.search(26);
    if(present == true) cout<<"The element is in the tree. "<<endl;
    else{
        cout<<"The element is not in the tree"<<endl;
    }
    present = tree1.search(8);//8 is not in the list so it should print that this element is not in the list
    if(present == true) cout<<"The element is in the tree. "<<endl;
    else{
        cout<<"The element is not in the tree"<<endl;
    }
    cout<<"========== Checking outputs for the randomly created vector ============="<<endl;
    //creating a tree for the random numbers to check
    BST<int> tree2;
    //random numbers are generated and insert initialized in a vector
    std::vector<int> randArray;
    for(int i = 0 ; i < 100 ; i++){
        int randNumber = rand() % 1000;
        randArray.push_back(randNumber);
    }
    //inserting all the random numbers in the tree using our insert method
    for(int var : randArray){
        tree2.insert(var);
    }
    //checking whether an element is in the tree or not
    bool present2 = false;
    present2 = tree2.search(26);
    if(present2 == true) cout<<"The element is in the tree. "<<endl;
    else{
        cout<<"The element is not in the tree"<<endl;
    }
    present2 = tree2.search(398);//8 is not in the list so it should print that this element is not in the list
    if(present2 == true) cout<<"The element is in the tree. "<<endl;
    else{
        cout<<"The element is not in the tree"<<endl;
    }

    return 0;
}

