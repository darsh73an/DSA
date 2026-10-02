class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;

        // skip empty spaces
        while(i >=0 && s[i] == ' '){
            i--;
        }

        // tarvel from backwards
        while(i >=0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }
};

// 0(n)
// 0(1)