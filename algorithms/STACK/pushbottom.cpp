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

    int temp = s.top(); // temp will save the values in every deletion of recursion after bc then add ie 4 add 1 , 2 , 3
    s.pop();
    push_bottom(s,val);
    s.push(temp);
}


// reverse a stack using recursion best way 0(n) , 0(n)
void reverse(stack<int> &s){
    //bc
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    push_bottom(s,temp);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main (){

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    printStack(s);

    // push_bottom(s,4);


    reverse(s);
    printStack(s);



    cout << endl;


    return 0;
}