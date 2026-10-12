#include <iostream>
#include <vector>
using namespace std;

//  DP

int fib(int n, vector<int> &dp){
    if(n <= 1) return n;

    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 1;  // both bc

    for(int i=2; i<=n; i++){
        dp[n] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int n = 7;
    vector<int> fb(n+1,-1); // fb stores and used to check whether the answer was already calculated 

    cout << fib(6);  // 6
}