class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void backtrack(vector<int>& candidates, int target, int st, int sum){
        if(sum == target){
            ans.push_back(curr);
            return;
        }

        for(int i=st; i<candidates.size(); i++){
            if(i > st && candidates[i] == candidates[i-1]) continue;
            if(sum + candidates[i] > target) break;

            curr.push_back(candidates[i]);
            backtrack(candidates, target, i+1, sum + candidates[i]);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, 0);
        return ans;
    }
};

// TC: O(n * 2^n) — explores subsets and copies valid combinations.
// SC: O(n) auxiliary space — recursion stack and current combination.