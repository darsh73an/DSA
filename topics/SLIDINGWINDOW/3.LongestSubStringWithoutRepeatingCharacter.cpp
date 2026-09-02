class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;         // to store unseen char
        int n = s.size();
        int maxLen = 0;
        int left = 0;                   // to keep track of st point of subString if dup then remove left and left++

        for(int right = 0; right<n; right++){
            while(mp.count(s[right])){
                mp.erase(s[left]);
                left++;
            }

            mp.insert(s[right]);
            int len = right - left + 1;

            maxLen = max(maxLen,len);
        }
        return maxLen;
    }
}; // Optimized
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // More optimized than unordered set

       vector<int> lastSeen(256,-1);
       int n = s.size();
       int left = 0;
       int len = 0;
       int maxLen = 0;

       for(int right=0; right<n; right++){
        if(lastSeen[s[right]] >= left){   // if dupli found 
            left = lastSeen[s[right]] + 1;
        }
        // if no dupli
            lastSeen[s[right]] = right;

        int len = right - left + 1;
        maxLen = max(len,maxLen);
       }
       return maxLen;
    }
};