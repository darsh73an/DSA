class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int minProd = arr[0], maxProd = arr[0];
        int ans = arr[0];
        
        for(int i=1; i<arr.size(); i++){
            int x = arr[i];
            
            if(x < 0){
                swap(minProd,maxProd);
            }
            
            minProd = min(x, minProd*x);
            maxProd = max(x, maxProd*x);
            
            ans = max(ans,maxProd);
        }
        return ans;
    }
};

// O(n)
// O(1)