#include<iostream>
#include<vector>
using namespace std;

// 0(2^n)
int knapsackRecursion(vector<int> val,vector<int> wt,int W,int n){
    if( n == 0 || W == 0){
        return 0;
    }
    int itemWeight = wt[n-1];
    int itemVal = val[n-1];

    if(itemWeight <= W){
        //include
        int ans1 = knapsackRecursion(val,wt,W -  itemWeight,n-1) + itemVal;
        //exclude
        int ans2 = knapsackRecursion(val,wt,W,n-1);

        return max(ans1,ans2);
    }
    else{
        return knapsackRecursion(val,wt,W,n-1);
    }
}

// 0(n * w)
int knapsackMem(vector<int> val,vector<int> wt,int W,int n,vector<vector<int>> &dp){
    if( n == 0 || W == 0){
        return 0;
    }

    if(dp[n][W] != -1){
        return dp[n][W];
    }
    int itemWeight = wt[n-1];
    int itemVal = val[n-1];

    if(itemWeight <= W){
        //include
        int ans1 = knapsackMem(val,wt,W - itemWeight,n-1,dp) + itemVal;
        //exclude
        int ans2 = knapsackMem(val,wt,W,n-1,dp);

        dp[n][W] = max(ans1,ans2);
        return dp[n][W];
    }
    else{
        dp[n][W] = knapsackMem(val,wt,W,n-1,dp);
    }
    return dp[n][W];
}

int KnapTab(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp) {
    
    // Fill DP table
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= W; j++){
            
            int itemWt = wt[i-1];   // correct index
            int itemVal = val[i-1];

            if(itemWt <= j){
                int include = itemVal + dp[i-1][j - itemWt];
                int exclude = dp[i-1][j];
                dp[i][j] = max(include, exclude);
            } 
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][W];  // final answer
}

bool targetSum(vector<int> nums,int target){
    int n = nums.size();
    vector<vector<int>> dp(n+1,vector<int>(target+1,0));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=target; j++){
            if(nums[i-1]  <= j){ // we are checking recent last element bcoz we started the loop with 1
                dp[i][j] = max(nums[i-1]+dp[i-1][j-nums[i-1]] , dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i=0; i<=n; i++){
        for(int j=0; j<=target; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return true;
}


int unbound(vector<int> val,vector<int> wt,int W,int n){
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));

    for(int i=1; i<n+1; i++){
        for(int j=1; j<W+1; j++){
            int itemWt = wt[i-1];
            int itemVal = val[i-1];

            if(itemWt <= j){ // W == j
                dp[i][j] = max(itemVal + dp[i][j-itemWt] , dp[i-1][j]);
                //                          i instead of i-1 bcoz we can have n numbers of same items if it has max val to get max pprofut in unboounded knapsack
            }else{ // exclude
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int coinChange(vector<int> &coins,int amt){
    int n = coins.size();
    vector<vector<int>> dp(n+1,vector<int>(amt+1,0));

    for(int i=0; i<n+1; i++){
        dp[i][0] = 1;
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<amt+1; j++){
            if(coins[i-1] <= j){
                dp[i][j] = dp[i][ j - coins[i-1]] + dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i=0; i<n+1; i++){
        for(int j=0; j<amt+1; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][amt];
}

int rodCutting(vector<int> prices,vector<int> length,int rodLength){
    int n = length.size();

    vector<vector<int>> dp(n+1,vector<int>(rodLength+1,0)); 

    

    for(int i=1; i<n+1; i++){
        for(int j=1; j<rodLength+1; j++){
            if(length[i-1] <= j){
                dp[i][j] = max(prices[i-1] + dp[i][j - length[i-1]] , dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

     for(int i=0; i<n+1; i++){
        for(int j=0; j<rodLength+1; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][rodLength];
}

int main (){

    vector<int> val = { 15,14,10,45,30 };
    vector<int> wt  = {2,5,1,3,4}; // n is the no of weights we are adding to balance the W to get max profit
    int W = 7;
    int n = 5;

    // vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));    

    cout << "knap tabulation" << KnapTab(val,wt,W,n,dp) << endl;
    cout << knapsackMem(val,wt,W,n,dp) << endl;
    //[printing mem matrix]
    for(int i=0; i<n+1; i++){
        for(int j=0; j<W+1; j++){
            cout << dp[i][j] << " ";
        }
            cout << endl;
    }

    vector<int> nums = {3,4,1,5,2};
    int target = 7;
    cout << endl;
    cout << targetSum(nums,target) << endl;

    cout << unbound(val,wt,W,n) << endl;

    cout << endl;

    //coin change
    vector<int> coins = {1,2,5};
    int amt = 5;

    cout << coinChange(coins,amt) << endl;


    //rod cutting
    vector<int>prices = {1,5,8,9,10,17,17,20};
    vector<int>length = {1,2,3,4,5,6,7,8};
    int rodLength = 8;

    cout << rodCutting(prices,length,rodLength) << endl;

    return 0;
}