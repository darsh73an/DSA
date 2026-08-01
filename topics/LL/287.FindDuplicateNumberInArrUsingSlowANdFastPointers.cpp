class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // optimal approoach Slow and fast pointers tc 0(n)  sc 0(1)

        // Remember these 5 interview points:
        // slow = nums[slow]; → Move 1 step
        // fast = nums[nums[fast]]; → Move 2 steps
        // while(slow != fast) → Find meeting point inside the cycle
        // slow = nums[0]; → Reset one pointer to the start
        // while(slow != fast) (second loop) → Find the entrance of the cycle (duplicate number)

        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while( slow != fast); // until this is true do block of code will execute and stop at cycle starting point
        
            slow = nums[0];  // start slow at 0 bcoz to find slow = the fast if found then cycle st point

            while(slow!=fast){
                slow = nums[slow];
                fast = nums[fast];
            }
        return slow;  // just return slow
    }
};