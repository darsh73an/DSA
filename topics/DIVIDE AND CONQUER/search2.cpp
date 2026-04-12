class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int si = 0;
        int ei = nums.size()-1;

        while( si <= ei ){
            int mid = si + ( ei - si) / 2;

            if( nums[mid] == target){
                return true;
            }

            if( nums[si] == nums[mid] && nums[mid] == nums[ei]){
                si++;
                ei--;
            }

            // true is left half is sorted
            else if( nums[si] <= nums[mid]){
                if( target >= nums[si] && target < nums[mid]){
                    ei = mid - 1;
                }
                else{
                    si = mid + 1;
                }
            }
            else{ 
                if( target > nums[mid] && target <= nums[ei]){
                    si = mid + 1;
                }
                else{
                    ei = mid - 1;
                }
            }
        }
        return false;
    }
};