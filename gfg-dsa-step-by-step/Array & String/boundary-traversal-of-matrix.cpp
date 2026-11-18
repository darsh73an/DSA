class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        
        if(n == 1){
            for(int i=0; i<m; i++){
                ans.push_back(mat[0][i]);
            }
            return ans;
        }
        
        if(m == 1){
            for(int j=0; j<n; j++){
                ans.push_back(mat[j][0]);
            }
            return ans;
        }
        
        // top right
        for(int i=0; i<m; i++){
            ans.push_back(mat[0][i]);
        }
        
        // right col
        for(int j=1; j<n; j++){
            ans.push_back(mat[j][m-1]);
        }
        
        // bottom row
        for(int i=m-2; i>=0; i--){
            ans.push_back(mat[n-1][i]);
        }
        
        // left col
        for(int j=n-2; j>0; j--){  // j > 0 bcoz we added 0,0 in first
            ans.push_back(mat[j][0]);
        }
        return ans;
    }
};

// O(n * m)
// O(1)