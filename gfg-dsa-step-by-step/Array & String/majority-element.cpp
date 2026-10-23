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