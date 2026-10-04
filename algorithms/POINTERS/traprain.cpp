#include <iostream>
#include <climits>
using namespace std;

//trap rain water

int rainWater(int height[] , int n){
    int leftMax[100000]; int rightMax[100000];
      if(n ==0) return 0;    

    rightMax[n-1] = height[n-1];               // initializing leftmax[0] to arrheight[n-1] or last element
    leftMax[0] = height[0];  
               

    for (int i=1 ; i< n ; i++){                     // left max starts with 1 bcoz 0 is initialized as leftMax
        leftMax[i] = max(leftMax[i-1],height[i]);   //  comparing left and 2nd left element
    }

    for(int i=n-2 ; i>=0 ; i--){                     // right max starts with n-2 bcoz n-1 is initialized as rightMax
        rightMax[i] = max(rightMax[i+1],height[i]);  //  comparing 2nd right and last element
    }


    int watertrapped = 0; 
    int currWater;
    for(int i=0 ; i<n ; i++){
       currWater = min(leftMax[i],rightMax[i]) - height[i];

       if(currWater > 0){
            watertrapped += currWater;                 // eg -> 0 = 0 + 3;    ,   3 = 3 + 2;  and we are calcualting total water trapped in every index not max
       }
       
    }
    cout << watertrapped << endl ;
    return watertrapped;
}



int main() {

    int height[5] = {5,4,3,2,1};  // auxiliary arr means helper or additional arr
    int n = sizeof(height) / sizeof(int);

   rainWater(height,n);
    return 0;
}
