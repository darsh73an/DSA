#include<iostream>
using namespace std;
//for binary search the array or numbers or values must be sorted
//1-> cal mid   mid=(st+end)/2;
//2-> verify mid with key value whether arr[mid] = key; return mid;
//3-> if(arr[mid] < key)  st = mid+1; end = n-1;
//3-> if(arr[mid] > key)  st = 0; end = mid-1;

int BinSearch(int arr[] , int n , int key) {
    int st = 0;
    int end = n-1;

    while(st <= end){          // bcoz st will compare every element and reaches end thats why =   and after running every time it calculates mid  and checks conditions and problem will be divided
        int mid = (st+end)/2;  // after 1st time while loop it claculates mid and separates the left and right the checks the condition again 

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            st = mid + 1;
        }
        else {
            end = mid - 1;      // for this st <= end is used
        }
    }

    return -1;   
}

int main () {

    int arr[] = {2,4,6,8,10,12,14,16,18,20,24};    
    int n = sizeof(arr)/sizeof(int);
    int key = 12;

    int index = BinSearch(arr , n , key);
    
    if(index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
 
    return 0;
}
