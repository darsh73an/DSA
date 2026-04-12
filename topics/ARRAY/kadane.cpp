#include <iostream>
#include <climits>
using namespace std;    // time complexity is O(n)

void kadane(int arr[], int n){

    int maxSum = INT_MIN;
    int curSum = arr[0];   // 0 OR arr[0]  i will not use 0 beacuse if the arr is like -3 -1 -8  then the sum will be -tive so 0 would be +tive 

    for(int i = 0; i < n; i++){    // single loop
    
        curSum += arr[i];  // accumulate sum
        maxSum = max(curSum, maxSum);

        if(curSum < 0){            // reset if sum becomes negative
            curSum = 0;
        }
    }

    cout << "Max sub array sum of the given array is : " << maxSum << endl;
}

int main () {

    int arr[6] = { 3 , -7 , 0 , -1 , 9 , 6};
    int n = sizeof(arr)/sizeof(int);

    kadane(arr, n);

    return 0;
}
