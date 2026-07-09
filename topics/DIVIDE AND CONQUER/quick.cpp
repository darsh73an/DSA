#include<iostream>
using namespace std;


// Your understanding should be:

// pivot → stores the value used to divide the array.
// j → moves forward and checks every value against the pivot.
// i → marks the boundary/last position of values smaller than the pivot.
// When arr[j] < pivot, i moves forward.
// Then swap(arr[i], arr[j]) places the smaller value on the left side.
// Finally, swap(arr[i + 1], arr[high]) places the pivot in its correct position.
// i + 1 → becomes the final index of the pivot.

// Memory: pivot = divider, j = search, i = smaller-values boundary

void printArr(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}


int partition(int* arr,int si,int ei){

    int i = si-1;
    int pivot = arr[ei];
    
    for(int j=si; j<ei; j++){
        if(arr[j] <= pivot){ // bcoz we have to keep the less than pivot elements in left
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}


void quicksort(int* arr,int si,int ei){

    if( si >= ei ){
        return;
    }

    int pivot = partition(arr,si,ei);

    quicksort(arr,si,pivot-1);
    quicksort(arr,pivot+1,ei);
}


int main () {

    int arr[] = {3,5,3,7,9,4,6};
    int n = sizeof(arr)/sizeof(int);

    quicksort(arr,0,n-1);
    printArr(arr,n);
  

    return 0;
}