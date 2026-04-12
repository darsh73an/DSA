#include<iostream>
using namespace std;

void decrease(int n){
    if(n==0){
        return;
    }
    
    cout << n << " ";
    decrease(n-1);
}


int main (){

    decrease(60);

    return 0;
}