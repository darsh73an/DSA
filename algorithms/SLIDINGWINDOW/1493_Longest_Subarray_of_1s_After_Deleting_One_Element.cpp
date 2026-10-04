class Solution {
public:
    // keep count of zeros if zeros > 1 then remove left and left++

    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zeros = 0;   // if zeros = 1 then we assume that we have del one element then count subarr if another occur then remove left
        int left = 0;
        int ans = 0;

        for(int right=0; right<n; right++){
            if(nums[right] == 0){
                zeros++;
            }
            while(zeros > 1){
                if(nums[left] == 0){  // here we will move left to get valid subarr
                    zeros--;   // this just minus zeros
                }
                left++;
            }
            ans = max(ans,right-left);
        }
        return ans;
    }
};