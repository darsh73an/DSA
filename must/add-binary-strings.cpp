class Solution {
  public:
    string addBinary(string& s1, string& s2) {
       
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;
        string ans = "";

        
        while(i >=0 || j >= 0 || carry){
            int sum = carry;
            
            if(i >=0 ) sum += s1[i--] - '0'; // ascii value for 0,1 is 48, 49
            if(j >=0 ) sum += s2[j--] - '0';
            
            ans += (sum % 2) + '0';
            carry = sum / 2;
        }
        
        reverse(ans.begin(), ans.end());
        // for gfg
        int idx = ans.find_first_not_of('0');
        if (idx == string::npos) return "0";

        return ans.substr(idx);
    }
};

// O(max(n, m));
// O(max(n, m)); for ans string

// -'0' → Character to integer.
// +'0' → Integer to character.
// % 2 → Current binary digit.
// / 2 → Carry.