class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;
        long long rightSum = 0; // see constraints

        // first calc right sum then reduce it in iterations and cmp with left sum
        // TC 0(n) SC 0(1)

        for(int i : nums){
            rightSum += i;
        }
        for(int i=0; i<n; i++){
            rightSum -= nums[i];

            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};