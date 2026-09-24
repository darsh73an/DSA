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
        unordered_set<char> st;
        int n = s.size();
        int startIdx = 0;
        int longest = 0;

        for(int i=0; i<n; i++){
            while(st.count(s[i])){  // if appeared more than once
                st.erase(s[startIdx]);
                startIdx++;
            }
            st.insert(s[i]);
            longest = max(longest, i - startIdx + 1);
        }
    return longest;
    }
};
