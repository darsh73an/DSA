class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first = INT_MIN, second = INT_MIN;
        
        for(int i : arr){
            if(i > first){
               second = first;
               first = i;
            }else if(i > second && i != first){
                second = i;
            }
        }
        return second == INT_MIN ? -1 : second;
    }
};

// 0(n)
// 0(1)