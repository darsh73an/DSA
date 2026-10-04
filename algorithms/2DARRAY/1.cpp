#include <iostream>
using namespace std;

// print the number of all 7's in the 2D array

void seven(int mat[3][4],int n ,int m){
    int count = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if (mat[i][j] == 7){
                count++;
            }
        }
    }
    cout<<"7 appeared:"<<count<<"times"<<endl;
}

int main(){

   int mat[3][4] = {
    {7, 2, 7, 4},
    {5, 7, 8, 7},
    {1, 3, 7, 9}
};

    seven(mat,3,4);

  
}

