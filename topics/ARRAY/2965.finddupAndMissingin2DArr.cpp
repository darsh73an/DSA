class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        unordered_set<int> s;

        long long actualSum = 0;
        int duplicate = 0;  // a

        // to find duplicate ie a
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                actualSum += grid[i][j]; // actual sum to calc missing

                if (s.count(grid[i][j]))  // if > 1 then dup OR s.find(grid[i][j]) != s.end())
                    duplicate = grid[i][j];

                s.insert(grid[i][j]);
            }
        }

        long long expectedSum = 1LL * n * n * (n * n + 1) / 2;   // 1ll means i long long to prevent int overflow

        // b missing
        int missing = expectedSum + duplicate - actualSum;  // missing = duplicate + expSum - actualSum

        return {duplicate, missing};
    }
};