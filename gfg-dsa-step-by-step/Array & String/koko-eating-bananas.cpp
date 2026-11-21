class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 1, r = *max_element(arr.begin(), arr.end());
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            int hours = 0;
            
            for(int i : arr){
                hours += (i + mid - 1) / mid;
            }
            
            if(hours <= k){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};

// O(log n)
// O(1)