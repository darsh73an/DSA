#include <iostream>
using namespace std;
//swap until  the largest element reaches ending index then leave end index and swap th sec last element to n-1 index


// Your understanding should be:

// i → counts the number of passes completed.
// j → moves through the unsorted part and checks adjacent values.
// arr[j] → current value.
// arr[j + 1] → next adjacent value.
// Finally, swap(arr[j], arr[j + 1]) swaps them if they are in the wrong order.
// After every pass, the largest remaining value moves to the end.

// Memory: i = pass, j = compare adjacent values

void  printArray(int* arr , int n ){    // printing arr
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout<< endl;
}

void bubblesort(int* arr , int n){
    for(int i=0; i<n-1; i++){           // i for after full swap of the arr from left to still there will be unsorted elements so from start j will check and swap until the largest element reaches the end of the array   
        for(int j=0; j<n-i-1; j++){     // originally for swapping the elements j , j+1 and  j<n-i-1 bcoz of j+1
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArray(arr,n);
}

int main() {

   int arr[] = {6 , 8 , 3 , 9 , 6 , 2 , 1 , 5};
   int n = sizeof(arr)/sizeof(int); 

   bubblesort(arr,n);
    return 0;
}







