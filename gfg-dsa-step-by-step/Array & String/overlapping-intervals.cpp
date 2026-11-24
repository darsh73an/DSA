class Solution {
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        for (auto &i : arr) {
            if (ans.empty() || i[0] > ans.back()[1]) {
                ans.push_back(i);
            }
            else {
                ans.back()[1] = max(ans.back()[1], i[1]);
            }
        }

        return ans;
    }
};

// O(n logn)
// O(1)