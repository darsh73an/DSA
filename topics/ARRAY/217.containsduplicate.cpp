// 2nd best approach for duplicate values unordered_set<int> st;

class Solution {   //tc 0(n) sc 0(n)
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        st.reserve(nums.size());   // for setting st to nums.size()
       

        for(int i : nums){
            if(st.count(i)){
                return true;
            }
            st.insert(i);
        }
        return false;
    }
};
