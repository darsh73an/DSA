#include<iostream>
#include<vector>
using namespace std;

// TC 0(n logn)
// SC 0(n)

// Your understanding should be:

// i → moves through the left sorted array.
// j → moves through the right sorted array.
// k → moves through the original/result array.
// left[i] and right[j] → are compared.
// The smaller value is copied into arr[k].
// Then only the pointer of the chosen side moves forward.
// Finally, any remaining elements from the left or right array are copied.

// Memory: i = left, j = right, k = result

void merge(int* arr,int si,int ei,int mid){
    vector<int> temp;
    int i = si;
    int j = mid+1;  // bcoz we have to cmp left and right half values

    while( i <= mid && j <= ei){
        if( arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    while( i <= mid){       // Agar ek side khatam ho gaya, dusri side me abhi bhi elements bache ho sakte hain.
        temp.push_back(arr[i++]);
    }

    while( j <= ei){        // Agar ek side khatam ho gaya, dusri side me abhi bhi elements bache ho sakte hain.
        temp.push_back(arr[j++]);
    }

    //for pasting the vector in arr

    int x = 0;
    for(int i = si; i <= ei; i++){
        arr[i] = temp[x++];
    }

}

void mergeSort(int* arr,int si,int ei){
    //BC    thats one element or sorted
    if( si >= ei){
        return;
    }

   int mid = si + (ei - si) / 2;


    mergeSort(arr,si,mid); // for left half
    mergeSort(arr,mid+1,ei); // for right half

    merge(arr,si,ei,mid);

}

void printArr(int* arr,int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
}

int main ( ){

    int arr[] = {6,4,7,3,8,5};
    int n = sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);
    printArr(arr,n);
    cout << endl;

    return 0;
}