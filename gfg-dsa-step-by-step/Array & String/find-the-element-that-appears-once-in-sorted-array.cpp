class Solution {
  public:
    int single(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        
        for(int i=0; i<n; i++){
            int mid = l + (r - l) / 2;
            
            if(mid % 2 == 1) mid--; // we want to cmp i,i+1 so it should be even
            
            if(arr[mid] == arr[mid+1]){
                l =  mid + 2; // bcoz there are duplicates
            }else{
                r = mid;
            }
        }
        return arr[l];
    }
};

// O(n)
// O(1)