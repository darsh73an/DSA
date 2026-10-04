#include <iostream>
#include<vector>
using namespace std;

// fibonacci of the nth element

int firstoccurance(vector<int> & arr,int i,int target){
    if( i == arr.size()){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }

   return  firstoccurance(arr,i+1,target);  // for next element
}

int main() {
    
    vector<int> arr = {1,2,2,3,3,4,3,4};

    cout << firstoccurance(arr,0,7) << endl;
   

    return 0;
}
