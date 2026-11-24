class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int l = 0, r = arr.size() - 1;
        // l is for going till 1 
        // r is for going till 0
        // then swap and l++ r--
        
        while(l < r){
            if(arr[l] == 0){
                l++;
            }else if(arr[r] == 1){
                r--;
            }else{
                swap(arr[l++], arr[r--]);
            }
        }
    }
};

// O(n)
// O(1)