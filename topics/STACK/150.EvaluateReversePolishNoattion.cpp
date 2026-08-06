class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;

        for(string i : tokens){  // i is tokens[i]

            if( i == "+" || i == "-" || i == "/" || i == "*"){  // if we got operator store a,b
            
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();

                if( i == "+"){
                    s.push(a+b);
                }else if ( i == "-"){
                    s.push(a-b);
                }else if ( i == "/"){
                    s.push(a/b);
                }else{
                    s.push(a*b);
                }
            }else{
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};