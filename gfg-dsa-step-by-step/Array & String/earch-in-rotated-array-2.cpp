class Solution {
  public:
    bool search(vector<int>& arr, int key) {
        int n = arr.size();
        int l = 0, r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            
            
             if(arr[mid] == key){
                return true;
            }
            
            
            // handle duplicates
            if(arr[l] == arr[mid] && arr[mid] == arr[r]){
                l++;
                r--;
                continue;
            }
            
           
            // left is sorted
            if(arr[l] <= arr[mid]){
                if(arr[l] <= key && key < arr[mid]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }else{ // right is sorted
                if(arr[mid] < key && key <= arr[r]){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};

// Average: O(log n)
// Worst: O(n)
// Space: O(1)