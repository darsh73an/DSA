#include <iostream>
#include <vector>
using namespace std;

// Top-Down DP

int fib(int n, vector<int> &dp){
    if(n <= 1) return n;

    if(dp[n] != 1) return dp[n]; // means claculated just return it

    dp[n] = fib(n-1,dp) + fib(n-2, dp);
}

int main() {
    int n = 7;
    vector<int> fb(n+1,-1); // fb stores and used to check whether the answer was already calculated 

    cout << fib(n, dp);  // 5
}