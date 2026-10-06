#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// in while loop we will eliminate the less values which occur in between the i and prev high 
// first we have to create a span vec and stack s then we have to move to 1st ele in stock and we get condition of s.empty()
//then span[i] becomes i + 1 if not empty then store in span[i] i - preHigh the index will be stored 


// we have to check and store the indexes of the price in which stock span is the prev - i  where prevhigh is the nearest high value to current
// and we calculate the distance b/w i and prev high and store it in stack  
void stockSpan(vector<int> stock,vector<int> span){
    stack<int> s;
    s.push(0); // pushing 0 index in stack
    span[0] = 1; // storing the index of first element bcoz we cannot find prevhigh or span[i]

    for(int i=1; i<stock.size(); i++){
        int currPrice = stock[i];
        while( !s.empty() && currPrice >= stock[s.top()]){
            s.pop(); // pop bcoz we dont want less element in center of prevhigh
        }

        if(s.empty()){
            span[i] = i + 1; // remember stack is empty not stock or stock has single element
        }
        else{
            int prevHigh = s.top(); // bcoz in while loop we will remove the lesser elements
            span[i] = i - prevHigh;
        }
    }

    for(int i=0; i<span.size(); i++){
        cout << span[i] << " ";
    }
    cout << endl;
}


int main() {

    vector<int> stock = {100,80,86,49,39,89,19,100};
    vector<int> span = {0,0,0,0,0,0,0,0};

    stockSpan(stock,span);

    return 0;
}