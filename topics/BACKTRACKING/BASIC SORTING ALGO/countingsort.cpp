#include <iostream>
#include <climits>   // for INT_MIN and INT_MAX
using namespace std;

// counting sort is used when in an array the range b/w the min and max element is low like 1,1,1,2,2,3,6 for +tive numbers

// in this method we store sthe frequencybof the each element , frequency means how many times the element has repeated in the array and frequency is always +tive
// in this frequency array the indexs are the numbers in array and we stores 0,1,2 like how many times it has been repeated in the array 

//eg [1,4,1,3,2,4,3,7]  
//    [0 2 1 2 1 0 0 1] ->> frequency
//     0 1 2 3 4 5 6 7

// in frequency arr we will travel every element until its freq is 0 so in 1 we got 2 frequency so write 1 in arr[0] , then its freq becomes 1 then again write 
// 1 in arr[1] then freq=0 then travel nxt in 2 we got freq1 so write 2 in arr[2] ....

void printArray(int* arr, int n) {    // printing arr
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void countsort(int* arr, int n) {

    int freq[100000] = {0};   // range & initialized to 0

    int maxValue = INT_MIN;
    int minValue = INT_MAX;

    // 🔹 Find min and max value in array
    for(int i = 0; i < n; i++){
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }

    // 🔹 Store frequency of each element in freq[] array
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;   // storing the frequency of ith element in frequency array
    }

    int j = 0;  // index for original array arr[]

    // 🔹 Rebuild sorted array using frequency array
    for(int i = minValue; i <= maxValue; i++){
        while(freq[i] > 0){     // if element has frequency then add it in original array and decrease its frequency in freq array
            arr[j++] = i;       // OR arr[j] = i;     j = j+1;
            freq[i]--;   // after adding the element from freq to arr then we have to decrease the freq of the element  eg 2 occurs 2 times in freq the decrease it by 1
        }
    }

    printArray(arr, n);
}

int main () {

    int arr[8] = { 1,4,1,3,2,4,3,7 };
    int n = sizeof(arr) / sizeof(int); 

    countsort(arr, n);
    return 0;
}


// for(...) {           // n
//     for(...) {       // n
//         for(...) {   // n
//             ...
//         }
//     }
// }  for nesting loop the time complexcity will be 0(n3)  but in counting sort 0(n+k);