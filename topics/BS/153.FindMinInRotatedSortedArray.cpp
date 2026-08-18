class Solution {
public:
    int findMin(vector<int>& nums) {
        int n =nums.size();
        int l = 0;
        int r = n-1;

        while(l <= r){
            int mid = l + (r-l)/2;

            if(nums[mid] > nums[r]){
                l = mid+1; // bcoz nums was reversed or ratated by some times
            }else{
                r = mid; // mid-1 no bcoz if mid < r then mid can be the smallest element
            }
        }
        return nums[l];
    }
};