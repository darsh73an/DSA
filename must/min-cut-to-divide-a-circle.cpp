class Solution {
public:
    int numberOfCuts(int n) {
        if(n == 1) return 0;

        if(n % 2 == 0) return n/2; // if even

        return n;
    }
};

// O(1)
// O(1)