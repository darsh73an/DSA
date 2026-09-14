#include <iostream>
#include <climits>
using namespace std;

void printA(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}



//bubble sort for descending order

void bubbleSort(int*arr , int n){
    for(int i=0; i<n-1; i++){           //just runs till sorted part of arr
        for(int j=0; j<n-i-1;j++){      // n-i-1 bcoz i elements are sorted main part
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);  // not used i bcoz i is used to run till the sorted part of array
            }
        }
    }
    printA(arr,n);
}


//insertion sort for descending order

void insertionSort(int*arr,int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] < curr){
            arr[prev+1] = arr[prev];            // eg 3,2    prev+1 = 2
            prev--;                             
        }
        arr[prev+1] = curr;                     // curr = 3
    }
    printA(arr,n);
}


//couting sort for descending order

void countSort(int* arr, int n) {

    int maxValue = INT_MIN;
    int minValue = INT_MAX;

    // 🔹 Find min and max value in array
    for(int i = 0; i < n; i++){
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }

    int range = maxValue - minValue + 1;

    int freq[100000] = {0};   // range & initialized to 0

    // 🔹 Store frequency of each element in freq[] array
    for(int i = 0; i < n; i++){
        freq[arr[i] - minValue]++;   // storing the frequency of ith element in frequency array
    }

    int j = 0;  // index for original array arr[]

    // 🔹 Rebuild sorted array using frequency array
    for(int i = range - 1; i >= 0; i--){
        while(freq[i] > 0){     // if element has frequency then add it in original array and decrease its frequency in freq array
            arr[j++] = i + minValue;  // OR arr[j] = i; j = j+1;
            freq[i]--;   // after adding the element from freq to arr then we have to decrease the freq of the element
        }
    }

    printA(arr, n);
}



int main() {

    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    countSort(arr,n);   // you can also call bubbleSort or insertionSort
    return 0;
}
