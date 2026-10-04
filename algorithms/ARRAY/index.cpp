#include<iostream>
using namespace std;

int main () {

    int arr[7] = { 4,5,7,3,6,9,3 };

    int n = sizeof(arr) / sizeof(int);

    for (int indx = 0 ; indx < n ; indx ++) {
         cout << arr[indx] << endl;
    }
    return 0;
}