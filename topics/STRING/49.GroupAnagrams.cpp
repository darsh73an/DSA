class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string& s : strs) {  // to travel through strs of string
            int freq[26] = {};

            for (char c : s) {     // to store freq of each char in each eg -> strs[i]
                freq[c - 'a']++;
            }

            string key;
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(freq[i]);  // true if same size and freq of each char
            }
            mp[key].push_back(s);  // we are pushing a single str in strs
        }

        vector<vector<string>> ans;
        for (auto& [key, match] : mp) {  // if key are same then add it in ans
            ans.push_back(match);
        }
        return ans;
    }
};

// TC: O(n × k)
// SC: O(n × k) — storing the groups + keys.