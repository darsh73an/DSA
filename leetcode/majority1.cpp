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

// second way
int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int i : nums) {
        if (count == 0) {
            candidate = i;
        }
        count += (i == candidate) ? 1 : -1;
    }

    return candidate;
}
