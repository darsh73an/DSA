class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_map<int,int> mp;
        int rank = 1;

        for(int i : sorted){
            if(mp.find(i) == mp.end()){ // not found
                mp[i] = rank++;
            }
        }

        for(int i=0; i<arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
    return arr;
    }
};

// O(n log n)
// O(n)