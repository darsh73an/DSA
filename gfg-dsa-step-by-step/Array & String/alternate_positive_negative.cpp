class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos,neg;
        
        for(int i : arr){
            if(i >= 0){
                pos.push_back(i);
            }else{
                neg.push_back(i);
            }
        }
        
        int p = 0, n = 0, i = 0;
        
        while(p < pos.size() && n < neg.size()){
            arr[i++] = pos[p++];
            arr[i++] = neg[n++];
        }
        
        while(p < pos.size()) arr[i++] = pos[p++];
        while(n < neg.size()) arr[i++] = neg[n++];
    }
};

// O(n)
// O(n)