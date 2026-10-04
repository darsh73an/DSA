class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0;

        // two pointer
        // just leave zero elements just swap non zero elements to first
        // i place where the first non zero element has to be placed
        // j the non zero element where it has to be moved to i

        for(int j=0; j<n; j++){  // check from st bcoz if first element is non-zero
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};