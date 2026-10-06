class Solution {
public:
    int reverse(int x) {
        int revOfX = 0;

        while(x != 0){
            int lastD = x % 10;

            if(revOfX > INT_MAX / 10 || revOfX < INT_MIN / 10){
                return 0;
            }

            revOfX = revOfX * 10 + lastD;  // remember formulae
            x /=  10;
        }
        return revOfX;
    }
};

// TC : 0(log n)
// SC : 0(1)