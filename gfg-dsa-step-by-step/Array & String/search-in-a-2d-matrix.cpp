class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        int n = arr.size(), m = arr[0].size();
        
        int l = 0, r = m-1;
        
        while(l < n && r >= 0){
            if(arr[l][r] == x){
                return true;
            }else if(arr[l][r] < x){
                l++;
            }else{
                r--;
            }
        }
    return false;
    }
};

// O(n * m)
// O(1)