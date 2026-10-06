Time: O(26 × n) because freq1 == freq2 compares 26 elements each time → effectively O(n)
Space: O(26) → O(1)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<int>freq1(26,0) ,freq2(26,0);

        for(char c : s1){
            freq1[c - 'a']++;
        }

        int k = s1.size();   // window size 
        for(int i=0; i<s2.size(); i++){
            freq2[s2[i] - 'a']++;

            if(i >= k){
                freq2[s2[i-k] - 'a']--;  // to move to nxt window remove first char 
            }
            if(freq1 == freq2) return true;
        }
        return false;
    }
};

