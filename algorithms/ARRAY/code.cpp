#include<iostream>
using namespace std;

// time complexcity is the relatin b/w no of inputs and no of operations
//array acts as an constant pointer and arr can be passes in functions like int* arr OR int arr[]  and the arr cannot be changed (modified) in function

int main () {

    int array[10];          // we can declare an array by size 

    int arr[] = {1,2,3,4};  // and empty [] declaration


    int ar[5] = {1,2,3};    // 3,4 index values in this array will be 0 (gabagge value)


    cout << ar[0] <<"," << ar[3] <<"," << ar[4] << endl;    // 1, 0 ,0


     // cout << arr << endl; elements will not be printed in output its adress will be printed
    //cout << *arr << endl;     now zeroth  index value will be printed
    //cout << *(arr+1) << endl;   arr[2]
    //cout << *(arr+2) << endl;     arr[3]
   //cout << *(arr+3) << endl; 


   // *arr = arr[0];
   // *(arr+1) = arr[1];

   // array name = pointer   eg->> arr = *ptr   and array is always passed by reference in any funcction

//    void func(int* ptr){
//     ptr[0] = 1000;
//    }

//    int main () {
//     int arr[] = { 1 , 4, 6, 7, 9};

//     func(arr);

//     cout << arr[0] << "=" << *arr << endl;   // 0th index will be 1000  any chnages in viod function while pass by reference changes in main 
//          or int main function
//    }


    // if we pass any arr from int main to any function like printA(arr)  then the size of arr in printA(int num) will be the size of int pointer = 8
    // arr[5] = {1,2,3,3,4} size of this array is 20 because each element has a capacity of 4 byte so 20
    // if we want original size of array then  n = sizeof(arr) / sizeof(int);
    

    return 0;
}
