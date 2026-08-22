class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Optimal approach XOR  tc 0(n) sc 0(1)

        // We use XOR of whole arr duplicate number get canceled and unque stays

        int unique = 0;

        for(int i : nums){
            unique ^= i;
        }
        return unique;
    }
};