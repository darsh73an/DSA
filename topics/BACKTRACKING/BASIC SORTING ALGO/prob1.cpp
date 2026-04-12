#include <iostream>
#include <algorithm>
using namespace std;

//sorting chars using selection sort in descending

void printA(char* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

void charSort(char* arr,int n){
     for(int i=1 ; i<n ; i++){
        int curr = arr[i];
        int prev = i-1;
   
        while (prev>=0 && arr[prev] < curr) //if u want descending replace > with <
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
        
     }
    printA(arr,n);
}

int main() {

    char arr[9] = {'g','t','d','g','h','j','k','l'};

    charSort(arr,9);
    return 0;
}
