class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Optimal approach XOR  tc 0(n) sc 0(1)

        int ans = 0;

        for(int i : nums){
            ans ^= i;
        }
        return ans;
    }
};