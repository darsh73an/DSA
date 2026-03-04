#include<iostream>
#include<vector>
using namespace std;


// using memoization means using extra space sloving DP

int fibonacciDP(int n,vector<int> &f){
    //BC
    if( n == 0 || n == 1){
        return n;
    }

    if(f[n] != -1){
        return f[n];
    }

    f[n] = fibonacciDP(n-1,f) + fibonacciDP(n-2,f);
    return f[n];
    
}


int main (){

    int n = 6;
    vector<int> f(n+1,-1);
    cout << fibonacciDP(n,f) << endl;

    return 0;
}