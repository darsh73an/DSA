class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int>freq(26,0);
        
        for(char i : s){
            freq[i - 'a']++;
        }
        
        for(char i : s){
            if(freq[i - 'a'] == 1){
                return i;
            }
        }
        return '$'; // if not repeating chars are their
    }
};

// O(n)
// O(1)