#include <chrono>
#include <vector>
using namespace std;
/* Only needed for the sake of this example. */
#include <iostream>
#include <thread>
//the version 1 that should take the max time as its O(N^3)
int maxSubSum1(const vector <int> &a){
    int maxSum = 0;
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = i ; j < a.size() ; j++){
            int currSum = 0;
            for(int k = i ; k < j ; k++){
                currSum = currSum+a[k];
            }
            if(currSum>maxSum){
                maxSum  =currSum;
            }
        }
    }
    return maxSum;
}
//the improved version  of the first one in which one N is removed
int maxSubSum2(const vector <int> &a){
    int maxSum = 0;
    for(int i = 0 ; i < a.size() ; i++){
        int currSum = 0;
        for(int j = i ; j < a.size() ; j++){
            currSum += a[j];
            if(currSum > maxSum){
                maxSum = currSum;
            }
        }
    }
    return maxSum;
}
//the version 3 the improved version of the code


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


    const vector<int> testData = {2, -3, 9,43,12,-13,10,-21, 5, -8,8 ,33,19,91,23,43,-11};

    // --- Testing Version 1 ---
    cout << "--- Version 1 ---" << endl;
    auto t1 = high_resolution_clock::now();
    int value1 = maxSubSum1(testData);
    auto t2 = high_resolution_clock::now();

    duration<double, std::milli> ms_double1 = t2 - t1;
    cout << "Max Sum: " << value1 << endl;
    cout << "Time: " << ms_double1.count() << " ms\n\n";


    // --- Testing Version 2 ---
    cout << "--- Version 2 ---" << endl;
    // FIX: Reused the same timing variables instead of redefining them with 'auto'
    t1 = high_resolution_clock::now();
    int value2 = maxSubSum2(testData);
    t2 = high_resolution_clock::now();

    duration<double, std::milli> ms_double2 = t2 - t1;
    cout << "Max Sum: " << value2 << endl;
    cout << "Time: " << ms_double2.count() << " ms\n";

    return 0;
}
