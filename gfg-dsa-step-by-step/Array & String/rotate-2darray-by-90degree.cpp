class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // for anti clock wise
        int n = mat.size();
        
        // 1. transpose
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        // 2. reverse each column
        for(int i=0; i<n; i++){
            int top = 0, bottom = n-1;
            
            while(top < bottom){
                swap(mat[top][i], mat[bottom][i]);
                top++;
                bottom--;
            }
        }
    }
};

// O(n^2)
// O(1)