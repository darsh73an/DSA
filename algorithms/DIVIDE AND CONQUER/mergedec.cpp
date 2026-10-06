#include<iostream>
#include<vector>
using namespace std;

// TC 0(n logn)
// SC 0(n)

void merge(int* arr,int si,int ei,int mid){
    vector<int> temp;
    int i = si;
    int j = mid+1;  // bcoz we have to cmp left and right half values

    while( i <= mid && j <= ei){
        if( arr[i] >= arr[j]){
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
    for(int idx = si; idx <= ei; idx++){
        arr[idx] = temp[x++];
    }

}

void mergeSort(int* arr,int si,int ei){
    //BC
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