#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;  // number -> index

    for (int i = 0; i < nums.size(); i++) {
        int needed = target - nums[i];

        if (mp.find(needed) != mp.end()) {
            return { mp[needed], i };
        }

        mp[nums[i]] = i;
    }

    return {};
}



// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         unordered_map<int, int> map;  // number -> index

//         for(int i = 0; i < nums.size(); i++) {

//             int needed = target - nums[i];

//             // first check
//             if(map.find(needed) != map.end()) { // find needed in map if not found then end using mp.end
//                 return { map[needed], i };
//             }

//             // then store
//             map[nums[i]] = i; // stores every index bczo we have to return idx
//         }

//         return {};
//     }
// };
// //in 5th line its stores data of int ,int type not in order but we can insert delete access its elements in 0(1) time
