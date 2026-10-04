#include <iostream>
using namespace std;

// serach in sorted matrix
// we will pic a starting point whether it may be 40 or 32

bool staircase(int mat[][4],int n,int m, int key){
    int i = 0, j = m-1;   // start from top-right corner
    
    while(i < n && j >= 0){

        if(mat[i][j] == key){
            cout << "element found at :" <<  "(" << i << "," << j << ")" << endl;
            return true;
        }
        else if(mat[i][j] < key){
            i++;          // move down
        }
        else{             // curr > key
            j--;          // move left
        }
    }
    cout << "element not found" << endl;
    return false;
}

int main(){

    int mat[][4] = {
        {10,  20,  30,  40},
        {15,  25,  35,  45},
        {27,  29,  37,  48},
        {32,  33,  39,  50}
    };

    staircase(mat,4,4,33);
    return 0;
}
