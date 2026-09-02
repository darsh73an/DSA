class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        // First window
        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        int maxSum = sum;

        //Slide the window
        for(int i=k; i<n; i++){
            sum += nums[i];
            sum -= nums[i-k];  // i-k bcoz  we have to remove the first element
            maxSum = max(sum,maxSum);
        }

        double maxAvg = (double)maxSum / k;
        return maxAvg;  // we need to find maxAvg not sum
    }
};