#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {   // n-2 bcoz we cannot calculate the triplets for n , n-1
        if (i > 0 && nums[i] == nums[i - 1]) continue; // i>0 bcoz we cannot check for i=0 i-1 for duplicate

        int left = i + 1; // after i
        int right = n - 1;  // largest and last value

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) left++;  // if last element appear once again the left++ for duplicates
                while (left < right && nums[right] == nums[right + 1]) right--;  // if right element appear once again the right-- for duplicates
            }
            else if (sum > 0) {
                right--;
            }
            else {
                left++;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {-1,-1,2,-5,2,-2,5, 0, 1, 2, -1, -4};

    auto output = threeSum(nums);

    for (auto &t : output) {
        cout << "[ ";
        for (int x : t) cout << x << " ";
        cout << "]\n";
    }
    return 0;
}


// Sort the array
// 2. Loop i from 0 to n-3
// - if i>0 and nums[i]==nums[i-1], skip
// 3. Set left=i+1, right=n-1
// 4. While left < right:
// - sum = nums[i] + nums[left] + nums[right]
// - if sum==0:
// store triplet
// left++, right--
// skip duplicates
// - else if sum>0:
// right--
// - else:
// left++