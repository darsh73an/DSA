// suppose u have to find the permutation of [123] then the simple steps __ATOMIC_RELAXED
// -> [0,1,2] indexes

// 1-> in 0th index swap(0,with all indexes including itself) eg -> swap(0,1) swap(0,2) etc

class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;

    void backtrack(vector<int>& nums, int start){
        int n = nums.size();
        if(start == n){
            ans.push_back(nums);
        }

        for(int i=start; i<n; i++){
            swap(nums[start],nums[i]);  // ith element choice 
            backtrack(nums,start+1);
            swap(nums[start],nums[i]);  // backtrackking
        } 
    }

    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums,0);
        return ans;
    }
};