class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // optimal approoach Slow and fast pointers tc 0(n)  sc 0(1)

        int slow = nums[0];
        int fast = nums[0];

        // find meeting point
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        // find duplicate
        slow = nums[0];

        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};