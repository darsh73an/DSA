class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void backtrack(vector<int>&nums, int st){
        ans.push_back(current); // after completeing each level add it in ans

        for(int i=st; i<nums.size(); i++){
            current.push_back(nums[i]);
            backtrack(nums, i+1);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return ans;
    }
};

// O(n^2)
// O(n^2) // including output