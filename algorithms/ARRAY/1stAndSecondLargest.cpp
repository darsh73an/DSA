#include <iostream>
#include <climits>
using namespace std;

int secLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {3, 2, 7, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secLargest(arr, n);

    return 0;
}