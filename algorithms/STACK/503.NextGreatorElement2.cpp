class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,-1);
        stack<int>s;  // here stack stores the index not actual element
       

        // we are not crearing copy of nums in right side we are just travling through that using i = i%n;
        for(int i=2*n-1; i>=0; i--){
             
            // remove smaller elements
            while(s.size() > 0 && nums[s.top()] <= nums[i%n]){ // i%n bcoz the method to get the valid idx
                s.pop();
            }

            ans[i%n] = s.empty() ? -1 : nums[s.top()];
            s.push(i%n);

        }

        return ans;
    }
};