class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1, ans = 0;

        while(l < r){
            int width = r-l;

            int minHeight = min(height[l],height[r]);

            ans = max(ans,width*minHeight);

            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};

// Number of elements in range → r - l + 1
// Distance between positions → r - l

// 0(n)
// 0(1)