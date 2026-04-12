#include<iostream>
#include<vector>
using namespace std;

// classical two pointer problem

int area(vector<int> height , int n){
    int left = 0 , right = n-1;
    int maxArea = 0;

    
       while(left < right){
        int curSum = min(height[left],height[right]) * (right - left);  // area formulae  like height * width
        maxArea = max(maxArea,curSum);

        if(height[left] <= height[right]){  // this both if and else condition are used to find maximum  width and its height
            left++;                         // dont stop calaulate the max of height of left
        }
        else {
            right--;
        }
       }

       cout << maxArea << endl;

}



int main (){

    vector<int> height = { 1,8,6,2,5,4,8,7,3};
    int n = height.size();
    
    area(height,n);
  
    return 0;
}

//leetcode solution

// int maxArea(vector<int>& height) {
//     int left = 0, right = height.size() - 1;
//     int maxArea = 0;

//     while (left < right) {
//         int curArea = min(height[left], height[right]) * (right - left);
//         maxArea = max(maxArea, curArea);

//         if (height[left] <= height[right])
//             left++;
//         else
//             right--;
//     }
//     return maxArea;
// }


