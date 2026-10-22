class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            vector<int> curr;
            
            for(int j=i; j<n; j++){
                curr.push_back(arr[j]);
                ans.push_back(curr);
            }
        }
        return ans;
    }
};

// O(n^2)
// O(1)