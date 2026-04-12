#include <iostream>
using namespace std;

// fibonacci of the nth element

bool sorted(int* arr,int n,int i){

    if(i == n-1){  // its last element ifwe reach till lasy then its fully sorted
        return true;
    }
    
    if(arr[i] > arr[i+1]){
        return false;
    }

    return sorted(arr,n,i+1);
}

int main() {
    
    int arr[] = {1,2,3,4,5,6};
    int unsortedarr[] = {1,2,3,5,4,3,4,6,5,4};
    int n = sizeof(arr)/sizeof(int);

    cout << sorted(arr,n,0) << endl;
    cout << sorted(unsortedarr,n,0) << endl;

    return 0;
}
