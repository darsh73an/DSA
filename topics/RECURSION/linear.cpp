#include<iostream>
using namespace std;

// linear search

int linearsearch(int* arr,int n,int key,int i){
    //BC
    if( i == n){
        return -1;
    }

    if( arr[i] == key){
        return i;
    }
    else{
        return linearsearch(arr,n,key,i+1);
    }

  
}

int main(){

    int arr[]={1,2,3,4,5,6,7};
    int n = 7;
    int key = 5;

    cout << linearsearch(arr,n,key,0) << endl;

    return 0;
}