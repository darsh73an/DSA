#include <iostream>
#include <algorithm>
using namespace std;

// this is default ascending order

void printA(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {

    int arr[9] = {5, 4, 1, 3, 2, 6, 3, 9, 4};

    // Sort only arr[1] and arr[2]
    sort(arr + 1, arr + 3);

    // sort(arr,arr+n); //sorts full arr

    printA(arr, 9);

    return 0;
}
