class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> ans;

        if(arr.size() == 0) return ans; // if empty

        ans.push_back(arr[0]); // 1st ele is always unique

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] != arr[i-1]) {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};

// O(n)
// O(n)