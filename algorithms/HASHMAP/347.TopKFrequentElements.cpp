class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;  // to store the frequency
        vector<int>ans;    // to store final k most repeated elements 
        vector<vector<int>>bucket(n+1);  // to get the top k freqeunt elements

        for(int i : nums){
            mp[i]++;
        }

        // store in bucket
        // bucket[i] conatins eg -> [2,3] whose freq is 4
        for(auto& [num,count] : mp){
            bucket[count].push_back(num);
        }

        // start from the highest frequency then move downwards
        for(int i=n; i>=1 && ans.size() < k; i--){
            for(int i : bucket[i]){
                ans.push_back(i);
                if(ans.size() == k){
                    break;
                }
            }
        }
      return ans;
    }
};

// Time Complexity: O(n)
// Count frequencies → O(n)
// Fill buckets → O(n)
// Traverse buckets → O(n)
// Space Complexity: O(n)
// Hash map → O(n)
// Bucket array → O(n)
// Answer → O(k)

// final both 0(n)