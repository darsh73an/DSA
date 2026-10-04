class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void backtrack(int start,int n, int k){
        if(current.size() == k){   // k is the size fo each cobination it should have
            ans.push_back(current);
            return;
        }

        for(int i=start; i<=n; i++){
            current.push_back(i);  // chose first element
            backtrack(i+1,n,k);         // explore for another element
            current.pop_back();         // undo
        }
    }

    vector<vector<int>> combine(int n, int k) {
        backtrack(1,n,k);
        return ans;
    }
};

TC: O(C(n,k) × k)
SC: O(k) excluding the output.