class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        // code here
        if(s1.size() != s2.size()) return false;
        
        int i = 0, j = 0;
        
        while(i < s1.size() && j < s2.size()){
            if(s1[i] != s2[j]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};

// O(n)
// O(1)