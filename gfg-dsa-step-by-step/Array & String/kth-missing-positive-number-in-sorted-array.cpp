class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        int l = 0, r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            int missing = arr[mid] - (mid + 1);
            
            
            if(missing >= k){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l + k; // + k bcz we have to return kth missing number
    }
};

// O(n)
// O(1)

// [1,2,3] k = 2 then [1,2,3,4,5] k=2 means add two then return kth element (imagine)