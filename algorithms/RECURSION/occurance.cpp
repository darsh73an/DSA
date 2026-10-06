#include<iostream>
using namespace std;

// occurrences of index

void occurance(int* arr, int n, int i, int key){
    // Base Case
    if(i == n){
        return;
    }

    if(arr[i] == key){
        cout << i << " " << endl;
    }

    occurance(arr, n, i+1, key);
}

int main(){

    int arr[]={3,2,4,5,6,2,7,2,2};
    int n = sizeof(arr)/sizeof(int);
    int key = 2;

    occurance(arr, n, 0, key);

    return 0;
}
