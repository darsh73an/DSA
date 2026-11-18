class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int n = arr.size();
        int l = 0, r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            if(arr[mid] >= k){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};

// O(n)
// O(1)