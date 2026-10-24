class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;

        if(p < 0){ // if -tive then make it +tive
            x = 1 / x;
            p = -p;
        }

        double ans = 1;
        while(p > 0){
            if(p % 2 == 1) ans *= x; // if odd, bcoz one decimal will be extra
            x *= x; // even

            p = p/2;
        }
        return ans;
    }
};

// O(log n)
// O(1)