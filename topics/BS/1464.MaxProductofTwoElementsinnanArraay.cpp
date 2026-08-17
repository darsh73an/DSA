class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0, second = 0;

        for(int i : nums){
            if(i > first){
                second = first; // assign first to second if we found greator than first
                first = i;
            }else if( i > second){
                second = i;
            }
        }
        return (first - 1) * (second - 1);
    }
};