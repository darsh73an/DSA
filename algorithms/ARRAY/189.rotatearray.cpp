class Solution {
public:
//  for void dont return anything
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n ;  // shortcut if reverse no is more than size of nums

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};