#include<iostream>
using namespace std;
 // int** matrix = new int*[rows];  it is array of pointers which points to each row in a matrix and each row pointer has a size of cols 



    int main (){
        int rows,cols;

        cout << "enter no of rows :";
        cin >>  rows;

        cout << "enter no of cols :";
        cin >>  cols;

        //remember this syntax
        int* *mat = new int*[rows];  // matrix creation ( int** mat is array of pointers)

        for(int i=0; i<rows; i++) {   
            mat[i] = new int[cols];
        }

        //data storing

        int x = 0;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                mat[i][j] = x++;
                cout << mat[i][j]<<" ";
            }
             cout << endl;
        }

        cout << mat[2][1] << endl;
        cout << *(*(mat+2)+1) << endl;    // mat menas it points to oth row pointer inner +2 means move two rows the it will be 2idx row and +2 last means 2th col in that row pointer

       
   
    return 0;
   
}