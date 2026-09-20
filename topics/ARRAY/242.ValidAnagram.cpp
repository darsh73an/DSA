class Solution {
public:
    // tc 0(n)  sc 0(1)

    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();

        if(n1 != n2) return false;

        int freq[26] = {};

        for(int i : s){
            freq[i - 'a']++;
        }
        for(int i : t){
            freq[i - 'a']--;
        }

       for(int i : freq){
            if(i != 0){
                return false;
            }
       }
        return true;
    }
};

