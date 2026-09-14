#include <iostream>
#include <algorithm>
using namespace std;

// this is descending order

void printA(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {

    int arr[9] = {5, 4, 1, 3, 2, 6, 3, 9, 4};

    // Sort only arr[1] and arr[2]
    sort( arr , arr + 9, greater<int>());    // greater not greator

 // sort(arr+2,arr+6,greater<int>());

    printA(arr, 9);

    return 0;
}
