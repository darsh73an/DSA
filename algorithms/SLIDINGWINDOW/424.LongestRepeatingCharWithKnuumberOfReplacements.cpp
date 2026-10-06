class Solution {
public:
    int characterReplacement(string s, int k) {
        int n =  s.size();
        vector<int> freq(26,0);
        int l = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for(int r=0; r<n; r++){
            freq[s[r]- 'A']++;  // store freq of r and go 

            maxFreq = max(maxFreq,freq[s[r] - 'A']); // calc maxfreq of char
            
            //chars we need to replace to get maxlen and less replace char
            int replaceNo = (r - l + 1) - maxFreq;
            //              window size   like BBB

            while(replaceNo > k){ // invalid
                freq[s[l] - 'A']--;
                l++;

                replaceNo = (r-l+1) - maxFreq;
            }
            maxLen = max(maxLen,(r-l+1));
        }
        return maxLen;
    }
};