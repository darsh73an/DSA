// best approach for duplicate values unordered_set<int> st;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
       

        for(int i : nums){
            if(st.count(i)){
                return true;
            }
            st.insert(i);
        }
        return false;
    }
};

class Solution {
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