class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(128,0);
        if(s.size() < t.size()) return "";

        int l = 0, count = 0, minSubStr = INT_MAX,start = 0;

        for(int i : t) freq[i]++;

        
        for(int r=0; r<s.size(); r++){
            if(freq[s[r]] > 0){
                count++;
            }
            freq[s[r]]--;

            while(count == t.size()){
                if(r-l+1 < minSubStr){
                    minSubStr = min(minSubStr,r-l+1);
                    start = l;
                }

                freq[s[l]]++;

                if(freq[s[l]] > 0){  // means innvalid substr
                    count--;
                }
                l++;
            }
        }
        return minSubStr == INT_MAX ? "" : s.substr(start,minSubStr);
    }
};

// tc 0(s+t)
// sc 0(1)

// l = current left pointer of the sliding window.
// start = left index of the best/minimum window found so far.