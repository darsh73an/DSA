class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());  // automatically store all the numbers unique numbers
        int longest = 0;

        for(int i : st){   // we have to traverse set not nums
            if(!st.count(i-1)){ // we will st from the no whose prev is not present
                int curr = i;
                int currLen = 1;

                while(st.count(curr+1)){
                    curr++;
                    currLen++;
                }
                longest = max(longest,currLen);
            }  
        }
        return longest;
    }
};

// ✅ TC: O(n) average
// ✅ SC: O(n)