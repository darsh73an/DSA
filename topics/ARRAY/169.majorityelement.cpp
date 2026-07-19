class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq; // int -> original number , freq of no in arr

        for(int n : nums){
            freq[n]++;  // if normal for loop then freq[n[i]]++

            if(freq[n] > nums.size() / 2){
                return n;
            }
        }
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) { // 0(n logn)

        // this is 2nd best approach by sorting
        int n = nums.size();

        //step 1 sort the array
        sort(nums.begin(),nums.end());

        int freq = 1;
        int ans = nums[0];

        //step 2 count the freqs and if num[i] is changed store ans as nums[i] and move

        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else{
                freq = 1;
                ans = nums[i];
            }

            if(freq > n/2){
                return ans;
            }
        }
        return ans;
    }
};

// Best Optimal approach
    class Solution {
public:
    int majorityElement(vector<int>& nums) { // 0(n) Optimal approach
    // Moore's algorithm

    int freq , ans = 0; int n = nums.size();

    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
        return ans;
    }
};