class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0; // the pos where the nonzero should be placed ie left
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] != 0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        return;
    }
};

// O(n)
// O(1)