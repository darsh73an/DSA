#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int histogramOfGraph(vector<int> height){
    int n =  height.size();
    vector<int> nsl(n); //to calc next smaller left using stack
    vector<int> nsr(n); //to calc next smaller right using stack
    stack<int> s;

    //for next smaller element
    nsl[0] = -1;
    s.push(0);
    for(int i=1; i<height.size(); i++){
        int currHeight = height[i];

       while(!s.empty() && height[s.top()] >= currHeight){ // 3 => 4
            s.pop();
        }
        // for empty or no smaller left elements
        if(s.empty()){

            nsl[i] = -1;
        }else{
            nsl[i] = s.top();
        }
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    //next smaller right
    s.push(n-1);
    nsr[n-1] = n; // bcoz of this fromulae width =  l - r - 1;
    
    for(int i=n-2; i>=0; i--){
        int currHeight = height[i];

        while(!s.empty() && height[s.top()] >= currHeight){ // 3 => 4
            s.pop();
        }
        // for empty or no smaller right elements
        if(s.empty()){
            nsr[i] = n;
        }else{
            nsr[i] = s.top();
        }
        s.push(i);
    }

    //to clac max
    int maxArea = 0;
    for(int i=0; i<n; i++){
        int ht = height[i];
        int width = nsr[i] - nsl[i] - 1; 
        int area = ht * width;

        maxArea = max(area,maxArea) ;
    }
    cout << maxArea << endl;
    return maxArea;
}


int main () {

    vector<int> height = { 6 , 2 , 15 , 3 , 10 , 1};

    histogramOfGraph(height);

    return 0;
}