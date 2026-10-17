class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end()); // this will store all ele of stones in pq in desc 8,7,6

        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();  

            int y = pq.top();
            pq.pop();    // here only we will destroy and store it if x != y then y = y-x

            if(x != y){
                pq.push(x - y);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};

// O(n log n)
// O(n)