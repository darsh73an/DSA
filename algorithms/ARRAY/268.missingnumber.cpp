// best optimal approach is xop operation 3 ^ 0 = 3 and 3 ^ 0 ^ 0 = 3;



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();

        for(int i=0; i<nums.size(); i++){
            ans = ans ^ i ^ nums[i];
        }
        return ans;
    }
};

// // Initial
// ans = 3

// // i = 0
// nums[0] = 0

// ans = 3 ^ 0 ^ 0
//     = 3 ^ 0
//     = 3

// //-----------------------------------

// // i = 1
// nums[1] = 2

// ans = 3 ^ 1 ^ 2
//     = 2 ^ 2
//     = 0

// //-----------------------------------

// // i = 2
// nums[2] = 3

// ans = 0 ^ 2 ^ 3
//     = 2 ^ 3
//     = 1

// //-----------------------------------

// return 1 or ans  