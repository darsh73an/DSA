class Solution {
public:
    string removeDuplicates(string s) {
        string ans;

        for(char c : s){
            // no empty ans if duplicate exists ans = ab and c = b
            if(!ans.empty() && ans.back() == c){
                ans.pop_back();
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};