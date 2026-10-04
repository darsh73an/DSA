#include <iostream>
using namespace std;

// travelling the nXm matrix in spiral or jalebi shape
// order: left → right, top → bottom, right → left, bottom → top

void diagnolSum(int mat[][4],int n , int m){
    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum += mat[i][j];
            }
            else if(j == n-i-1){  // (0,3) (1,2) (2,1) (3,0)  =>> j = n-i-1  3 = 4-0-1 = 3 , 2 = 4-1-1 =2 
                sum += mat[i][j];
            }
        }
    }
    cout << sum << endl;
}


int main(){

    int mat[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14,15,16}
    };

    diagnolSum(mat, 4, 4);
    return 0;
}
