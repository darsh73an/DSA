#include<iostream>
using namespace std;  // tim complexcity 0(n^3)

void sumsubarr(int* arr, int n){
    int maxSum = INT16_MIN;
    for( int st=0 ; st<n ; st++){        // st 
        for(int end=st ; end<n ; end++){ // end
            int curSum = 0;
            for(int i=st ; i<end ; i++){ // printing arr
                curSum += arr[i];
            }
            cout << curSum << ",";
            maxSum =  max(curSum,maxSum); // for max sub arr
        }
        cout << endl;                     // endind line after printing all sub arrs
    }
    cout <<"mas sum of the array :" << maxSum << endl;
}

int main (){
    int arr[6] = { 2 , -4 , 5 , -6 , 6 , 1};
    int n =  sizeof(arr)/sizeof(int);

    sumsubarr(arr,n);
    return 0;
}



//   
// 
// 
// 
// 
// 