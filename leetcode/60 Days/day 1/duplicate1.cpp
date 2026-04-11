class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mp;

        // here i is not index it actual elements and it auto increments
        // i -> 1,2,3,1
        //i->1 , i->2 , i->3 , i->1
        for(int i : nums){
            if(mp.find(i) != mp.end()){  // to check if the element exists
                return true;
            }
            mp.insert(i);
        }
        return false;
    }
};