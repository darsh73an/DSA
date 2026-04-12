#include<iostream>
#include<vector>
using namespace std;

// x to the powerof n

//dry run
// powofx(2,3)
// = 2 * powofx(2,2)
// = 2 * 2 * powofx(2,1)
// = 2 * 2 * 2 * powofx(2,0)
// = 2 * 2 * 2 * 1
// = 8


int powofx(int x,int n){
   if(n == 0){
    return 1;
   }
   return x ^ powofx(x,n-1); 
}


int main (){

    cout << powofx(4,2) <<endl;

   

    return 0;
}