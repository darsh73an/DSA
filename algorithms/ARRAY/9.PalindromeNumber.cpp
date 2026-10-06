class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int rev = 0;

        if(x < 0) return false;

        while(x != 0){
            int d = x % 10;

            if(rev < INT_MIN / 10 || rev > INT_MAX / 10){
                return 0;
            }

            rev = rev * 10 + d;
            x /= 10;
        }
        return original == rev;
    }
};

// 0(log n)
// 0(1)