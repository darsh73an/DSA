#include<iostream>
#include<vector>
using namespace std;

//last occurance with vector

int lastoccur(vector<int> &arr,int i,int target){
    if(i == 0){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return lastoccur(arr,i-1,target);
}


int main (){

    vector<int> arr = {1,1,2,3,3,4,4,4,5,6,6,6,6};
    int n = arr.size();

    cout << lastoccur(arr,n-1,1) <<endl;

    return 0;
}