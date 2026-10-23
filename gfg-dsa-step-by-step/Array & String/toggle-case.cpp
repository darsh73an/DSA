class Solution {
  public:
    string toggleCase(string &s) {
        for(char& i : s){
            if(i >= 'a' && i <='z'){
                i -=  32;
            }else if(i >= 'A' && i <= 'Z'){
                i += 32;
            }
        }
        return s;
    }
};

// O(n)
// O(1)