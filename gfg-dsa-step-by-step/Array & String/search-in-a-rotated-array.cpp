class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int l = 0, r = n - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(arr[mid] == key) {
                return mid;
            }

            // Left half is sorted
            if(arr[l] <= arr[mid]) {
                if(arr[l] <= key && key < arr[mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else { // right half is sorted
                if(arr[mid] < key && key <= arr[r]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};

// O(log n)
// O(1)