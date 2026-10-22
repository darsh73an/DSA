class Solution {
  public:
    bool checkPangram(string& s) {
        vector<bool> seen(26,false);
        int count = 0;
        
        for(int i : s){
            if(i >= 'a' && i <= 'z'){
                if(!seen[i - 'a']){
                    seen[i - 'a'] = true;
                    count++;
                }
            }else if(i >= 'A' && i <= 'Z'){
                if(!seen[i - 'A']){
                    seen[i - 'A'] = true;
                    count++;
                }
            }
            if(count == 26) return true;
        }
        return false;;
    }
};

// O(n)
// O(1)