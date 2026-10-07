class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d %= n; // use this if d is > n
        
        reverse(arr.begin(),arr.begin() + d);
        reverse(arr.begin() + d,arr.end());
        reverse(arr.begin(),arr.end());
    }
};

// O(n)
// O(1)