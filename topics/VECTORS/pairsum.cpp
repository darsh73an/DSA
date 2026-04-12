#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec,int target){
    int curSum = 0;
    int st = 0 , end = vec.size()-1;
    vector<int> ans;                    // ans stores the indxs of the st and end

    while (st < end)
    {
        curSum = vec[st] + vec[end];

        if(curSum == target){
            ans.push_back(st);      // pushing the st value in vector ans
            ans.push_back(end);     // pushing the end value in vector ans  , now it has two value now we can check by printing its 0,1st indxs
            return ans;
        }
        else if(curSum > target){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;

}

int main (){

    
    vector<int> vec = { 1,3,4,17 };
    int target = 8;

    vector<int> ans = pairSum(vec,target);

    cout << ans[0] << "," << ans[1] << endl;    // we are couting first element ie st indx and last element ie end indx

    return 0;
}