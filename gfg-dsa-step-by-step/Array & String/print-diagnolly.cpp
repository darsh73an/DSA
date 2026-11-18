class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        
        for(int j=0; j<n+m -1; j++){
            int r = max(0, j - m +1);
            int c = min(j, m - 1);
            
            while(r < n && c >= 0){
                ans.push_back(mat[r++][c--]);
            }
        }
        return ans;
    }
};

// O(n * m)
// O(1)