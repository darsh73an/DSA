class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            int carry = (a & b) << 1; // << 1 to get the carry
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};

// O(n)
// O(1)