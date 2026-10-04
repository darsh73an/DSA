#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

//lowest comman subsequence using recursion
int lsRec(string str1,string str2){
    if(str1.size() == 0 || str2.size() == 0){
        return 0;
    }
    int n = str1.size();
    int m = str2.size();

    if(str1[n-1] == str2[m-1]) {//last element is same
        return 1 + lsRec(str1.substr(0,n-1),str2.substr(0,m-1));
    }else{ // abcdefg , ace
        int ans1 = lsRec(str1.substr(0,n-1),str2);
        int ans2 = lsRec(str1,str2.substr(0,m-1));
        return max(ans1,ans2);
    }
}

//memoization
int lcsMem(string str1,string str2,vector<vector<int>> dp){  //0(n * m)
    if(str1.size() == 0 || str2.size() == 0){
        return 0;
    }

    int n = str1.size();
    int m = str2.size();

    if(dp[n][m] != -1){
        return dp[n][m];
    }

    if(str1[n-1] == str2[m-1]) {//last element is same
        dp[n][m] = 1 + lsRec(str1.substr(0,n-1),str2.substr(0,m-1));
    }else{ // abcdefg , ace
        int ans1 = lsRec(str1.substr(0,n-1),str2);
        int ans2 = lsRec(str1,str2.substr(0,m-1));
        dp[n][m] = max(ans1,ans2);
    }
    return dp[n][m];
}


int lcsTab(string str1,string str2){
   
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,0)); 


    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1]; // 1 is like count how many times valid comman subseq are present
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}


// longest comman substring
int lcsubStr(string str1,string str2){
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int ans = 0;

    for(int i=1; i<n+1; i++){ // start from 1 bcoz for 0 no substring
        for(int j=1; j<m+1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                ans = max(ans,dp[i][j]); // means the current substr is longest or longest is exist in prev
            }else{
                dp[i][j] = 0;
            }
        }
    }

    //  for(int i=0; i<n+1; i++){ // start from 1 bcoz for 0 no substring
    //     for(int j=0; j<m+1; j++){
    //        cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return ans;
}

int lisubStr(vector<int> arr){  //0(n^2)
    unordered_set<int> s(arr.begin(),arr.end()); // storing unique values in set 

    vector<int> arr2(s.begin(),s.end());
    sort(arr2.begin(),arr2.end());  // 0(nlogn)

    int n = arr.size();
    int m = arr2.size();
    int ans = 0;
    vector<vector<int>> dp(n+1,vector<int>(m+1));

    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){    //0(n*m)
            if(arr[i-1] == arr2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}


int editDistance(string s1,string s2){
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    for(int i=0; i<n+1; i++){ // base cases
        dp[i][0] = i; 
    }

    for(int j=0; j<m+1; j++){
        dp[0][j] = j;
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]; // we have ignored adding 0 
            }else{
                dp[i][j] = 1 + min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
            }
        }
    }

    return dp[n][m];
}







int main() {

    vector<int> arr = { 50,3,10,7,40,80 };

    string s1 = "horse";
    string s2 = "ros";

    string str1 = "abcdefghigk";
    string str2 = "abcdghi";
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1)); 

    cout << "longest comman subsequence is " << lsRec(str1,str2) << endl;

    cout << "longest comman subsequence Mem " << lcsMem(str1,str2,dp) << endl;

    cout << "longest comman subsequence Tab " << lcsTab(str1,str2) << endl;

    cout << "longest comman substring Tab " << lcsubStr(str1,str2) << endl;

    cout << "longest comman increasing substring Tab " << lisubStr(arr) << endl;

    cout << "min operations to make s1 to s2 is " << editDistance(s1,s2) << endl;

    return 0;
}