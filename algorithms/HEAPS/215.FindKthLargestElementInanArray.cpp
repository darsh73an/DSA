class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int i : nums){
            minHeap.push(i);

            if(minHeap.size() > k){ // remove until kth element becomes top in minHeap
            minHeap.pop();
            }
        }
        return minHeap.top();
    }
};

// 0(n log k)
// 0(k)