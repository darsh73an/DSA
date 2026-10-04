class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;

        int sum = 0, sumCount = 0;

        for(int i : nums){
            sum += i;

            if(mp.count(sum - k)){  // if zero then sum == k 
                sumCount += mp[sum -k];  // in simple sumCount++ or sumCount += 1;
            }
            mp[sum]++;  // here we are storing sum has occured
        }
        return sumCount;
    }
};

// sum → current running sum
// mp[sum] → frequency of that sum
// subArrCount → number of valid subarrays
