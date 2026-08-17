class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();   // for row size
        int n = matrix[0].size();  // for column size

        int l = 0 , r = m*n-1;

        while(l <= r){
            int m = l + (r -l) / 2;

            int val = matrix[m/n][m%n];  // to dfnd the value in 2d arr

            if(val == target){
                return true;
            }else if( val > target ){
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        return false;
    }
};



















