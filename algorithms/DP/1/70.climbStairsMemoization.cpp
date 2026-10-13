class Solution {
public:
    int solve(int n, vector<int> &dp){
        if(n <=1) return 1;   // bc for n

        if(dp[n] != -1) return dp[n];

        return dp[n] = solve(n-1,dp) + solve(n-2,dp); // in memoization recursive for function but in tab
        // recursive for iterations
    }

    int climbStairs(int n) {
       vector<int> dp(n+1,-1);

       return solve(n,dp);
    }
};