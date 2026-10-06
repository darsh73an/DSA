class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int i=0; // i moves or counts till the unique elements or points till unique elements in nums

        // i for counting unique elements
        // j iterates and checks for other unique elements

       for(int j=0; j<n; j++){
        if(nums[i] != nums[j]){   // means unique element
            i++;
        }

            nums[i] = nums[j];
       }
       return i+1; // bcoz idx starts with 0 and i counts thew no of unique elements
    }
};




class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int i=0; // i moves till the unique elements or points till unique elements in nums

        // i for counting unique elements
        // j iterates and checks for duplicate

        for(int j=1; j<n; j++){
            if(nums[i] != nums[j]){
                i++;
                //[1,1,2,2,3]
                // ↑   ↑
                // i   j
                //so
                nums[i] = nums[j]; //add unique element side of unique element 
            }
        }
        return i+1;
    }
};