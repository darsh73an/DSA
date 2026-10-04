#include <iostream>
#include <unordered_set>
using namespace std;

bool Duplicate(int nums[], int n) {

    unordered_set<int> s;                       // in this we will store only unique elements from nums[]

    for(int i=0 ; i<n ; i++){                   // for printing
        if(s.count(nums[i]) > 0){               // before adding to the s set we will check that we have added it before or not if not then we will add the element
            return true;
        }
        s.insert(nums[i]);
    }
    return false;                               // if s.count(nums[i] > o)
}

int main() {

    int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(nums) / sizeof(int);

    // cout << (Duplicate(nums, n) ? "true" : "false");  OR

    if(Duplicate(nums,n)){
        cout << "true " << endl;
    }
    else{
        cout << "false " << endl;
    }
    return 0;
}
