#include <iostream>
using namespace std;

// travelling the nXm matrix in spiral or jalebi shape
// order: left → right, top → bottom, right → left, bottom → top

void spiralMat(int mat[][4], int n, int m){

    int top = 0;        
    int bottom = n - 1; 
    int left = 0;       
    int right = m - 1;  

    while(top <= bottom && left <= right){

        // Print top row (left to right)
        for(int col = left; col <= right; col++){
            cout << mat[top][col] << " ";
        }
        top++;

        // Print right column (top to bottom)
        for(int row = top; row <= bottom; row++){
            cout << mat[row][right] << " ";
        }
        right--;

        // Print bottom row (right to left)
        for(int col = right; col >= left; col--){
            cout << mat[bottom][col] << " ";
        }
        bottom--;

        // Print left column (bottom to top)
        for(int row = bottom; row >= top; row--){
            cout << mat[row][left] << " ";
        }
        left++;
    }
    cout << endl;
}

int main(){

    int mat[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14,15,16}
    };

    spiralMat(mat, 4, 4);
    return 0;
}
