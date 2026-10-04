// 0101010  true
// 11001010 flase


class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int prev = n & 1;
        n >>= 1; // ie n = n >> 1;

        while(n){
            int curr = n & 1;

            if(prev == curr) return false;

            prev = curr;
            n >>= 1;
        }
        return true;
    }
};

// so first we store prev then if we do n >>=1 the we remove one and then in while we can cal curr then compare if true then assign curr to prev then n >>= 1 then recalc curr than loop 