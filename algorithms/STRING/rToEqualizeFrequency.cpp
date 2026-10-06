// need to remove only one letter so that every letter has same freq in a-z
class Solution {
public:
    bool equalFrequency(string word) {
        int n = word.size();
        vector<int> freq(26,0);


        for(char ch : word){
            freq[ch - 'a']++;
        }

        for(int i=0; i<26; i++){
            if(freq[i] == 0) continue;

            freq[i]--; // every i dec and check if this was dec then all are having same freq
            int comman = 0; // to track if all freq are comman
            bool valid = true; // to check is valid or not

            for(int i : freq){
                if(i == 0) continue;

                if(comman == 0){  // id curr is comman
                    comman = i;   // eg 2 freq is comman
                }else if(comman != i){  // if different freq's found
                    valid = false;
                    break;
                }
            }
            freq[i]++;  //  first we have decreased it for checking validity
            if(valid) return true;
        }
        return false;
    }
};

// 0(n)
// 0(1)