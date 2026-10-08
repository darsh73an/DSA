class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // s1 = "abcd"
        // s1+s1 = "abcdabcd"
        
        // s2 = "cdab"        
        
        return s1.size() == s2.size() && (s1 + s1).find(s2) != string::npos; // if str in npos ie not found 
    }
};

// O(n)
// O(n)

//  == npos ->  not found
//  != npos ->  we found