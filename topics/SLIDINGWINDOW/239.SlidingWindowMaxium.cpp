class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;   // stores the idx of nums
        vector<int> ans;

        for(int r=0; r<n; r++){
            //remove non window elements
            if(!dq.empty() && dq.front() <= r-k){ // 0 <= 3 -> 3,1,3,5  win is now 1,3,5 so idx os first 3 is 0 and if we do r-k then if its <= then invalid widow remoce idx
                dq.pop_front();
            }

            //remove smaller elements
            while(!dq.empty() && nums[dq.back()] <= nums[r]){
                dq.pop_back();
            }

            //add curr index
            dq.push_back(r);

            // if done cmp whole window
            if(r >= k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
    return ans;
    }
};

// TC: O(n)
// SC: O(k)