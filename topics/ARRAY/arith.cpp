#include<iostream>
using namespace std;

//    ptr++  OR  ++ptr
//      int ->> 4byte
//      char ->> 1byte
//  if we do int ptr++ then the element will move 4 index from current in arr or any other DS due to size of int
//  if we do char ptr++ then the element will move 1 index from current in arr or any other due to size of char


// ptr ++ means in int skip 4 spaces and if ptr + 3 then skip 12 spaces beacuse for int byte is 4 and 4*3 is 12  
// ptr -- means in int skip 4 spaces and if ptr - 3 then skip 12 spaces beacuse for int byte is 4 and 4*3 is 12  

// arr[5] -->> arr+1 means 1st index , arr+2 means 2nd index


int main () {

    int a = 10;           // OR char
    int* ptr = &a;

    cout << ptr <<"\n";

    ptr++;                // ptr-- means it goes left or back by 4 positions if int 

    cout << ptr <<"\n";

    return 0;
}