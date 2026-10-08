class Solution {
public:
    bool rotateString(string s1, string s2) {
        return s1.size() == s2.size() && (s1 + s1).find(s2) != string::npos; 
    }
};

// O(n)
// O(n)

// != string::npos found
// == string::npos not found