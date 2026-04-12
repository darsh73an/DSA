#include <iostream>
using namespace std;

// 2d arr name as as a row pointer like mat

// STL -> standard template library






void func(int mat[][4], int n , int m){
    cout << "0th row ptr"<< mat << endl;
    cout << "1th row ptr"<< mat+1 << endl;
    cout << "2th row ptr"<< mat+2 << endl;
    cout << "3th row ptr"<< mat+3 << endl;

    cout << "0th row value"<< *mat << endl;
     cout << "1th row value"<< *(mat+1) << endl;
     cout << "2th row value"<< *(mat+2) << endl;   // in output it will be address but while we use it it will be correct
}

int main(){

    int mat[][4] = {
        {10,  20,  30,  40},
        {15,  25,  35,  45},
        {27,  29,  37,  48},
        {32,  33,  39,  50}
    };

    func(mat,4,4);

         return 0;


    //                        // {total 16bytes}  ie mat+1 = next row
    //                        // { 4 bytes     }
    // cout << mat << endl;   // { 10,20,30,40 }  and address of the mat is 1st 10 element in the row
    // cout << mat+1 << endl; // { 15,25,35,45 }  and address of the mat is 1st 15 element in the row
    // cout << mat+2 << endl; // { 27,29,37,48 }  and address of the mat is 1st 27 element in the row
    // cout << mat+3 << endl; // { 32,33,39,50 }  and address of the mat is 1st 32 element in the row
   
}

// int(*ptr)[4] = int mat[][4]

// int (*ptr)[5] this pointer points to 5 elements in a row  and its passed by value not reference ie changes appear in man function