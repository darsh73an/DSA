class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        stack<int>s;//3,-1
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i=n2-1; i>=0; i--){
            // check whether stack has lower elements if remove from it
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            }

            //store int nums2
            if(s.empty()){
                mp[nums2[i]] = -1;
            }else{
                mp[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        // store in ans ds to return
        for(int i=0; i<n1; i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};