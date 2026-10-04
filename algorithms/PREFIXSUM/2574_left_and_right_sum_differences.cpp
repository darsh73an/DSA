class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0, rightSum = 0;

        for(int i : nums){
            rightSum += i;
        }
        for(int i=0; i<n; i++){
            int curr = nums[i];
            rightSum -= curr;

            nums[i] = abs(leftSum - rightSum);
            leftSum += curr;
        }
        return nums;
    }
};