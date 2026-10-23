class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int i = n-2;
        
        // 1.find pivot element ie 1 in 1 7 5 0 bcoz its in asec then we got small element
        while(i >= 0 && arr[i] >= arr[i+1]){
            i--;
        }
        // i is the idx of pivot element 
        
        // 2. find the greator element than pivot from right
        if(i >= 0){ // if valid
            int j = n-1;
            
            while(arr[j] <= arr[i]){
                j--;
            }
            swap(arr[i], arr[j]);
        }
        
        // 3.reverse suffix
        reverse(arr.begin() + i + 1, arr.end());
    }
};

// Example: arr = [2, 4, 1, 7, 5, 0]
// 1. Find pivot: From right, find 1 < 7 → pivot = 1.
// 2. Find greater element: From right, find 5 > 1, swap → [2, 4, 5, 7, 1, 0].
// 3. Reverse suffix: Reverse elements after pivot ([7, 1, 0]) → [2, 4, 5, 0, 1, 7].
// 4. No pivot case: If array is [3, 2, 1], no pivot exists, so reverse the whole array → [1, 2, 3].

// O(n)
// O(1)