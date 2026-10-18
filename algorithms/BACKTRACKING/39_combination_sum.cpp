class Solution {
public:
    vector<int> curr;
    vector<vector<int>> ans;

    void backtrack(vector<int>& candidates, int target, int st){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(target < 0){  // invalid numbers sum exceeds more than target
            return;
        }

        // if valid and add more ele than just focus on this loop
        for(int i=st; i<candidates.size(); i++){
            curr.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates, target, 0);
        return ans;
    }
};

// Time Complexity: “The time complexity is exponential because we explore multiple combinations. It depends on the target and the smallest candidate.”
// Auxiliary Space: “The auxiliary space is \(O(T/M)\), where \(T\) is the target and \(M\) is the smallest candidate, due to the recursion stack and current combination.”
// Output Space: “The output space depends on the number and size of valid combinations stored.”