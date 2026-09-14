class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //transpose
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){    // j+1 bcoz we want to rotate matrix
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // for row reversing each row
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};


// [00,01,02]   for reverse 90degree swap 01,10  etc....
// [10,11,12]
// [20,21,22]

//   transpose
// [1,2,3]    [1,4,7]
// [4,5,6] -> [2,5,8]
// [7,8,9]    [3,6,9]

//  reverse each row

// [1,4,7]    [7,4,1]
// [2,5,8] -> [8,5,2]
// [3,6,9]    [9,6,3]  


// done