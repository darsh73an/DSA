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
    int majorityElement(vector<int>& arr) {
        int candidate = 0, count = 0;
        
        
        for(int i : arr){ // to find the candidate which has more occurance but not > n/2
            if(count == 0) candidate = i;
            count += (candidate == i) ? 1 : -1;
        }
        
        count = 0;
        
        for(int i : arr){  // to check if candidate has appeared > n/2 times
            if(i == candidate) count++;
        }
        return count > arr.size() / 2 ? candidate : -1;
    }
};

// O(1)
// O(1)