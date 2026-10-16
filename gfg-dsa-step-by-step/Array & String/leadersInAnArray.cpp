class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        int rightMax = INT_MIN;
        vector<int> ans;
        
        for(int i=n-1; i>=0; i--){
            if(arr[i] >= rightMax){
                ans.push_back(arr[i]);
                rightMax = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// O(n)
// O(n)