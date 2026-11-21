class Solution {
  public:
    int floorSqrt(int n) {
        int l = 1, r = n;
        int ans = 0;
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            if(mid <= n / mid){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans;
    }
};

// O(log n)
// O(1)