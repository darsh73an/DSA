class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0, r = n - 1;
        int first = -1, last = -1;
        
        // first occurance
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            if(arr[mid] >= target){
                first = mid;
                r = mid - 1;
            }else if(arr[mid] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        
        if(first == -1) return 0;
        
        
        // last occurance
        l = 0, r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            if(arr[mid] == target){
                last = mid;
                l = mid + 1;
            }else  if(arr[mid] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return last - first + 1;
    }
};

// O(log n)
// O(1)
