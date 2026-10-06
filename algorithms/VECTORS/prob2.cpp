#include<iostream>
#include<vector>
using namespace std;



int main (){

   int arr[] = { 0,1,2,3,3,5,6 };
   int n = sizeof(arr)/sizeof(int);
   int freq[7] = {-1,-1,-1,-1,-1,-1,-1};

   for(int i=0; i<n; i++){
    freq[arr[i]]++;  // it will go to the index and do plus 1
   }

 for(int i=0; i<n; i++){
    if(freq[i] == 1) 
    cout << "duplicate is :" << i << endl;

    else if(freq[i] == -1)
    cout << "missing number is :"<< i << endl;
 }
   

    
  
    return 0;
}


//leetcode solution

// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> freq(n + 1, -1);          n is size of nums and freq should be greator than  that

//         // count frequency
//         for (int i = 0; i < n; i++) {
//             freq[nums[i]]++;                 storing the freq of each no in freq vecotr
//         }

//         int duplicate = -1, missing = -1;

//         // find duplicate and missing
//         for (int i = 1; i <= n; i++) {
//             if (freq[i] == 1)
//                 duplicate = i;
//             else if (freq[i] == -1)
//                 missing = i;
//         }

//         return {duplicate, missing};
//     }
// };