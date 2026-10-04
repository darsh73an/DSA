class Solution {
public:
    int hammingWeight(int n) {
        // Optimal approach  ->  Brian Kernighan's algorithm.

        int count = 0;

        while(n){
            n = n & (n-1);
            count++;
        }
        return count;
    }
};


// if they ask to find zero bits
// int zeros = 0;

// while (n > 0) {
//     if ((n & 1) == 0)
//         zeros++;      n & 1 if n is 0 then only it bcomes 0 so zeros++

//     n = n >> 1;
// }