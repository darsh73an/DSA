class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        vector<int> ans;
        if (m > n) return ans;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char ch : p) {
            freq1[ch - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < n; right++) {
            freq2[s[right] - 'a']++;

            if (right - left + 1 == m) {

                if (freq1 == freq2) {
                    ans.push_back(left);
                }

                freq2[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};