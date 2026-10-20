class Solution {
  public:
    bool isPalindrome(int n) {
        int original = n;
        int rev = 0;
        
        while(n > 0){
            int lastD = n % 10;
            rev = rev * 10 + lastD;
            n /= 10;
        }
        return original == rev;
    }
};

// O(log n)
// O(1)