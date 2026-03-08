#include<iostream>
#include<stack>
using namespace std;



// first it will hit bc and push the new element in bottom then backtrack and add next prev removed element then
//  it backtracks and continues until elements are over
void push_bottom(stack<int> &s,int val){  // 0(n)
    // bc
    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    push_bottom(s,val);
    s.push(temp);
}

int main (){

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    push_bottom(s,4);

    // for printing stack
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}