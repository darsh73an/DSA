#include <iostream>
using namespace std;
// take min or nay card place it in its correct position like 1 2 4   then place 3 in its position the arr is 1 2 4 3 5 
//“Select the minimum element from the unsorted part and place it at the correct position.


void  printArray(int* arr , int n ){    // printing arr
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout<< endl;
}

void insertionsort(int* arr , int n){
   
    for(int i=0; i<n; i++){
        int curr = arr[i];  //taking curr value to assign it in its original position
        int prev = i-1;     // using prev of curr

        while( prev >= 0 && arr[prev] > curr ){    //  if prev>curr like 3>2 then relpace 3 with 2
            swap(arr[prev],arr[prev+1]);           // swap(3,2)
            prev--;                                // i-2
        }   
        arr[prev+1] = curr;
    }


    printArray(arr,n);
}

int main() {

   int arr[] = { 5,4,1,3,2 };
   int n = sizeof(arr)/sizeof(int); 

   insertionsort(arr,n);
    return 0;
}







