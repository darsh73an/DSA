#include <iostream>
using namespace std;

// print the numbers in 2nd row of nums

void printrow(int nums[4][4],int n,int m){
    int sum = 0;
   
    for( int j=0; j<n; j++){            // here we are taking j bcoz i is row ie 1 1st row
        sum += nums[1][j];
    }
    cout <<"sum of the 2nd row in nums is :" << sum << endl;
}

int main(){

   int nums[4][4] = {
    {7, 2, 7, 4},
    {5, 7, 8, 7},
    {1, 3, 7, 9},
     {1, 3, 7, 9}
};

    printrow(nums,4,4);

  
}

