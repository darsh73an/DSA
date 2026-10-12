class Solution {
  public:
    string firstNonRepeating(string &s) {
        int n = s.size();
        vector<int>freq(26,0);
        queue<int>q;
        string ans;  // imp -> we are adding 1st non repeating char in each iteration
        
        // s = aabc
        // ans = a#bc
        // # shows that there is no non-repeating character in the string prefix processed so far.
        
        for(int i=0; i<n; i++){
            q.push(s[i]);
            freq[s[i] - 'a']++;
            
            while(!q.empty() && freq[q.front() - 'a'] > 1){
                q.pop();
            }
            
            if(q.empty()){ 
                ans += '#';
            }else{
                ans += q.front();;
            }
        }
        return ans;
    }
};

// O(n)
// O(n)