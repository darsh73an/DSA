class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0, row = 0;

        for(int i=0; i<n; i++){
            int count = 0;// we are using it here bcpz for ezch row we have to find max 1's

            for(int j=0; j<m; j++){
                if(matrix[i][j] == 1){
                    count++;
                }
            }
            // so one row completed update if its the max
            if(count > ans){
                ans = count;
                row = i;
            }
        }
        return {row,ans};
    }
};

// 0(n^2)
// 0(1)
