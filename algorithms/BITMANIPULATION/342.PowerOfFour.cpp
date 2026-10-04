class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;

        if((n & (n - 1)) != 0) return false;

        return ( n & 0x55555555) != 0;   
    }
};


// What is 0x55555555?

// In binary:

// 01010101010101010101010101010101

// It has 1s at positions:

// 0, 2, 4, 6, 8, ...