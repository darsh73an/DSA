class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

//       brute foce aproach
        // for finding squares of each element in nums
        // for(int i=0; i<n; i++){
        //     nums[i] *= nums[i];
        // }

        // this is brute force
        //sort(nums.begin(),nums.end());

        // optimal two pointer approach

        int l = 0;
        int r = n-1;
        int a = n-1;

        // see the pattern of arr first in right half is in ascending order and in left half its in non ascending order so two pointer 
        while(l <= r){
          if(abs(nums[l]) > abs(nums[r])){
            ans[a--] = nums[l] * nums[l];
            l++;
          }else{
            ans[a--] = nums[r] * nums[r];
            r--;
          }
        }

        return ans;
    }
};