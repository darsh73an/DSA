#include <iostream>
using namespace std;

//Binary search

int search(int *nums, int n, int target) {

    int st = 0, end = n - 1;

    while (st <= end) {

        int mid = (st + end) / 2;

        // Case 1: found target
        if (nums[mid] == target)
            return mid;

        // Case 2: left half is sorted
        if (nums[st] <= nums[mid]) {

            if (nums[st] <= target && target < nums[mid])
                end = mid - 1;                              // if target exists in left half
            else
                st = mid + 1;
        }
        // Case 3: right half is sorted
        else {

            if (nums[mid] < target && target <= nums[end])
                st = mid + 1;                               // if target exists in right half
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main() {

    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(int);
    int target = 0;

    cout << search(nums, n, target) << endl;

    return 0;
}


























// #include <iostream>
// using namespace std;

// int search(int nums[], int n, int target) {

//     int low = 0, high = n - 1;

//     while (low <= high) {

//         int mid = (low + high) / 2;

//         // Case 1: target found
//         if (nums[mid] == target)
//             return mid;

//         // Case 2: Left half is sorted
//         if (nums[low] <= nums[mid]) {

//             // target lies in left half
//             if (nums[low] <= target && target < nums[mid])
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
//         // Case 3: Right half is sorted
//         else {

//             // target lies in right half
//             if (nums[mid] < target && target <= nums[high])
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }

//     return -1;  // target not found
// }

// int main() {

//     int nums[] = {4, 5, 6, 7, 0, 1, 2};
//     int n = sizeof(nums) / sizeof(int);
//     int target = 0;

//     int index = search(nums, n, target);

//     cout << index << endl;

//     return 0;
// }
