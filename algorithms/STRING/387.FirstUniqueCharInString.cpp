class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);  //TC 0(n) SC 0(1) 26

        for(char i : s){
            freq[i - 'a']++;
        }

        for(int i=0; i<s.size(); i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};