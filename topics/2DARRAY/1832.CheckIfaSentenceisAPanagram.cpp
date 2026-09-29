class Solution {
public:
    //panagram means all 26 letters in a-z should be present in sentence
    
    bool checkIfPangram(string sentence) {
        vector<bool> freq(26,false);

        for(int i : sentence){
            freq[i - 'a'] = true;
        }

        for(bool i : freq){ // we will check in freq vector no tin sentence again
            if(!i){
                return false;
            }
        }
        return true;
    }
};

// TC: O(n)
// SC: O(1)