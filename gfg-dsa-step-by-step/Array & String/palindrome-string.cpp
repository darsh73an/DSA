class Solution {
  public:
    bool isPalindrome(string& s) {
        int n = s.size();
        int l = 0, r = n-1;
        
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

// O(n)
// O(1)