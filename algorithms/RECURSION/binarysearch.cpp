#include<iostream>
using namespace std;

// binary search

int binarysearch(int* arr,int key,int st,int end){
    //BC
    if( st > end){
        return -1;
    }

    int mid = st + ( end - st) / 2;

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key ){
        return binarysearch(arr,key,st,mid-1);
    }
    else{ // arr[mid] < key
        return binarysearch(arr,key,mid+1,end);
    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7};
    int n = 7;
    int key = 5;

    cout << binarysearch(arr,key,0,n-1) << endl;

    return 0;
}