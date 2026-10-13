class Solution {
public:
    int climbStairs(int n) {
       vector<int> dp(n+1,0);

       dp[0] = 1;
       dp[1] = 1;


       for(int i=2;  i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
       }
    return dp[n];
    }
};

// if 1, 2 and 3 steps can be taken then


class Solution {
public:
    int climbStairs(int n) {
       vector<int> dp(n+1,0);

       dp[0] = 1;
       dp[1] = 1;
       dp[2] = 2;


       for(int i=3;  i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + d[i-3];
       }
    return dp[n];
    }
};