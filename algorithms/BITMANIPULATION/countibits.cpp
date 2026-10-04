#include<iostream>
using namespace std;


int countIBits(int num){
    int count = 0;
   
    while(num > 0){ // this will be true for every time and runs until the number is empty by right shifting

    //step 1 -> usign odd or even condition we can get last number then add it to count variable
       int lastDigit = num & 1;

       count += lastDigit;


    //step 2 -> is to right shift every time so that every last ele get ejected to cal the count
        num = num >> 1;
        }

    cout << "count of number is :"<< count << endl;
        return count;

}
 
int main () {

    countIBits(327);

    return 0;
}


//leetcode
// class Solution {
// public:
//     vector<int> countBits(int num) {
//         vector<int> ans( num+1 , 0);
//             for (int i=1; i<=num; i++){
//                 ans[i] =  ans[i >> 1] + (i & 1);  ans[i >> 1] means like sum = sum + bitMask and right shift 
//             }
//         return ans;
//     }
// };