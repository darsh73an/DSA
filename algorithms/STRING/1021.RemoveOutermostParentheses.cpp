class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int balance = 0;

        for(int i : s){
            if(i == '('){
                if(balance > 0){ // till this the outer braces will be removed
                    str += i;
                }
                balance++;
            }else{
                balance--;
                if(balance > 0){
                    str += i;
                }
            }
        }
        return str;
    }
};

// O(n)
// O(n)

// (()())

// 1-> balance++ == 1 (
// 2-> balance++ == 2 ( str += (
// 3-> balance-- == 1 ) str += )