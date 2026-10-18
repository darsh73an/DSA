class Solution {
public:
    vector<vector<int>> ans;

//     Step 1: Fix index 0
// - Swap (0,0) → [1,2,3]
// - Swap (0,1) → [2,1,3]
// - Swap (0,2) → [3,2,1]

    void backtrack(vector<int>& nums, int idx){
        int n = nums.size();
        if(idx == n){
            ans.push_back(nums);
        }


        // idx swaps with every idx inclu itself to make all possible permutations
        for(int i=idx; i<n; i++){
            swap(nums[idx],nums[i]);
            backtrack(nums, idx+1);
            swap(nums[idx], nums[i]);  //The second swap is to restore the original array so the next iteration can try a different number at the same index.
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums,0);
        return ans;
    }
};