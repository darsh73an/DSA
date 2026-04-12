#include <iostream>
using namespace std;
//0(n+range) OR 0(n)
//sort the min element to st index of arr then leave it and find 2nd min element and place it in 1th index after first step consider minidx as i in next all the steps ...

void  printArray(int* arr , int n ){    // printing arr
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout<< endl;
}

void selectionsort(int* arr , int n){
    
    for(int i=0; i<n-1;  i++){      //runs n-1 times bcoz in last the last element will be always sorted
         int minIdx = i;            // minIdx = i bcoz we consider st element as min leaving the prev element which is already sorted 
        for(int j=i+1; j<n; j++){   // j=i+1 bcoz if 1st element is sorted then we will start from i+1 , j<n bcoz we have sort till the last element 
            if(arr[minIdx] > arr[j]){  // here we are consi i as min indx and comparing i and j as minidx and j
                minIdx = j;             
            }
        }
        swap(arr[i],arr[minIdx]);     // 3,2 swap(3,2); and minidx = 2
    }


    printArray(arr,n);
}

int main() {

   int arr[] = { 5,4,1,3,2 };
   int n = sizeof(arr)/sizeof(int); 

   selectionsort(arr,n);
    return 0;
}







