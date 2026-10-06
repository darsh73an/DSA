#include <iostream>
using namespace std;
// take min or nay card place it in its correct position like 1 2 4   then place 3 in its position the arr is 1 2 4 3 5 
//“Select the minimum element from the unsorted part and place it at the correct position.

// Your understanding should be:

// i → selects the current value that must be inserted into the correct position.
// key → stores the actual current value arr[i].
// j → moves backward through the already-sorted left part.
// arr[j] > key → checks whether the left value is bigger than key.
// arr[j + 1] = arr[j] → shifts bigger values one position to the right.
// Finally, arr[j + 1] = key places the key in its correct position.

// Memory: i = select, key = save value, j = move backward


void  printArray(int* arr , int n ){    // printing arr
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout<< endl;
}

void insertionSort(int* arr, int n) {

    for (int i = 1; i < n; i++) {

        int curr = arr[i];   // store current value
        int prev = i - 1;    // start checking from previous element

        // Shift larger elements one position right
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        // Insert curr into correct position
        arr[prev + 1] = curr;
    }
}

int main() {

   int arr[] = { 5,4,1,3,2 };
   int n = sizeof(arr)/sizeof(int); 

   insertionsort(arr,n);
    return 0;
}







