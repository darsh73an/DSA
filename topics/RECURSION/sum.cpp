#include<iostream>
using namespace std;

//sum of n natural numbers

int nsum(int n){

    if(n==0){
        return 0;
    }
   return n + nsum(n-1);  // 5 + nsum(4)
}


int main (){

   cout <<  nsum(6) << endl;

    return 0;
}