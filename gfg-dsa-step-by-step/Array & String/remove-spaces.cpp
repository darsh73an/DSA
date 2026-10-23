class Solution {
  public:
    string removeSpaces(string& s) {
        string ans;
        
        for(int i : s){
            if(i != ' '){
                ans += i;
            }
        }
        return ans;
    }
};

// O(n)
// O(n)