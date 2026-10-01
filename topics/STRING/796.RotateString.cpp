class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        return (s+s).find(goal) != string::npos;
    }
};

// 0(n^2)
// 0(n)
