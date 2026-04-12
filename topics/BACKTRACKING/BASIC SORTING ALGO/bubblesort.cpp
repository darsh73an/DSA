#include <iostream>
using namespace std;
//swap until  the largest element reaches ending index then leave end index and swap th sec last element to n-1 index

void  printArray(int* arr , int n ){    // printing arr
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout<< endl;
}

void bubblesort(int* arr , int n){
    for(int i=0; i<n-1; i++){           // loop runs n-1 times ie 7times
        for(int j=0; j<n-i-1; j++){     // cmp and swapping 3,5
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







