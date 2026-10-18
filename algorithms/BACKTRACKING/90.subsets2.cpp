class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void backtrack(vector<int>& nums, int st){
        ans.push_back(curr);

        for(int i=st; i<nums.size(); i++){
            if(i > st && nums[i] == nums[i-1]) continue;

            curr.push_back(nums[i]);
            backtrack(nums, i+1);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        backtrack(nums, 0);
        return ans;
    }
};

// TC: O(n * 2^n) — generates up to 2^n subsets, copying each takes O(n).
// SC: O(n) auxiliary space — recursion stack and current subset, excluding output.