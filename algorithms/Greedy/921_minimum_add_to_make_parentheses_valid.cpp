class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0, ans = 0;

        for(char ch : s){
            if(ch == '('){
                balance++;
            }else{
                if(balance > 0){ // means open and close match 
                    balance--;
                }else{
                    ans++; // open close does not match so ans++
                }
            }
        }
        return ans + balance;
    }
};

// 0(n)
// 0(1)