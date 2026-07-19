class Solution {
public:
    int strStr(string haystack, string needle) {
    
    return (haystack.find(needle) == string::npos) ? -1 : haystack.find(needle);

    }
};



//  int idx = haystack.find(needle);

//      if(idx == string:nops){ // nops -> no position
//         return -1;
//      }
//      return idx;