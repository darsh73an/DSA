#include<iostream>
#include<string>
#include<vector>
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


int main() {

    string str1 = "abcdgefghijkmqrstuv";
    string str2 = "abedgfhikqru";
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1)); 

    cout << "longest comman subsequence is " << lsRec(str1,str2) << endl;

    cout << "longest comman subsequence Mem " << lcsMem(str1,str2,dp) << endl;

    cout << "longest comman subsequence Tab " << lcsTab(str1,str2) << endl;


    return 0;
}