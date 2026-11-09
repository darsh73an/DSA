class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();
        
        int maxSum = arr[0], currSum = arr[0];
        for(int i=1; i<n; i++){
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
            
            if(currSum < 0){
                currSum = 0;
            }
        }
        
        int minSum = arr[0], minCurr = arr[0];
        for(int i=1; i<n; i++){
            minCurr = min(arr[i], minCurr + arr[i]);
            minSum = min(minCurr, minSum);
        }
        
        int totalSum = accumulate(arr.begin(), arr.end(), 0);
        
        if(maxSum < 0) return maxSum;
        
        return max(maxSum, totalSum - minSum);
    }
};

// O(n)
// O(1)