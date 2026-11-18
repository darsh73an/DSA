class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest = INT_MIN;
        
        for(int i : arr){
            largest = max(i, largest);
        }
        return largest;
    }
};

// O(n)
// O(1)
