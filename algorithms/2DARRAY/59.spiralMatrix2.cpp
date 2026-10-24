class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0, left = 0, right = n-1, bottom = n-1;
        int val = 1;
        vector<vector<int>> ans(n, vector<int>(n, 0));

        while(top <= bottom && left <= right){
            for(int col=left; col<=right; col++){
                ans[top][col] = val++;
            }
            top++;

            for(int row=top; row<=bottom; row++){
                ans[row][right] = val++;
            }
            right--;

            if(top <= bottom){
                for(int col=right; col>=left; col--){
                    ans[bottom][col] = val++;
                }
                bottom--;
            }

            if(left <= right){
                for(int row=bottom; row>=top; row--){
                    ans[row][left] = val++;
                }
                left++;
            }
        }
        return ans;
    }
};

// O(n^2)
// O(n^2)