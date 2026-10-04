class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){  // add index
                st.push(i);
            }else{
                st.pop();    // remove index for valid check

                if(st.empty()){ // current ')' is unmatched → set new boundary
                    st.push(i);
                }else{          // valid and check if prev valid is max or curr is max
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;
    }
};

// 0(n)
// 0(n)