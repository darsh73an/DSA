class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original = n;
        int ans = 0;
        
        while(n > 0){
            int lastD = n % 10;
            ans += lastD * lastD * lastD;
            n /= 10;
        }
        return ans == original;
    }
};

// TC: O(d), where d is the number of digits
// SC: O(1), excluding to_string storage