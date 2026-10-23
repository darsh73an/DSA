class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ans = 0;
        
        for(int i=0; i<n; i++){
            ans += arr[i] * (i+1) * (n-i);
        }
        return ans;
    }
};

// O(n)
// O(1)



// i + 1 = number of subarrays that can start at index i (choose any starting index from 0 to i).
// n - i = number of subarrays that can end at index i (choose any ending index from i to n-1).