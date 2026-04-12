#include<iostream>
using namespace std;


void  printA(int* arr , int n){
    for (int i=0;i<n;i++){
        cout << arr[i] <<",";
    }
    cout << endl;
}


int main () {

    int arr[5] = {5, 4, 3, 1, 2};    
    int n = sizeof(arr)/sizeof(int);

   
    int st=0;
    int end=n-1;

     while(st < end){  // st value < end value 
       
        swap (arr[st] , arr[end]);
            //   OR
        // int temp = arr[st];  
        // arr[st]=arr[end];
        // arr[end]=temp;


        st++;  // 0 , 1 , 2
        end--;  // 5 , 4 , 3
     }

     printA(arr,n); // for printing arr after reversing
    return 0;
}
