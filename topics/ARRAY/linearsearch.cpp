#include<iostream>
using namespace std;


// daily DSA practice

int LinSearch(int* arr, int n, int key){        //void will not returns nothing int returns index count 0 -1  result
    for (int indx = 0; indx < n; indx++){
        if (arr[indx] == key){

            cout << "Element found at index " << indx << endl;
            //OR
            return indx;
        }
    }
     return -1 ; //if not found
}

int main () {

    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);
    int key = 4;
    LinSearch(arr, n, key);
    return 0;
}
