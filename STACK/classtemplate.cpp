#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <class T>
class Stack{
    vector<T> vec;
public:
    void push(int val){
        vec.push_back(val);
    }

    void pop(){
        if(isEmpty()){
            cout << "stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    T top(){
       
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main () {

    Stack<int> s;
    Stack<char> a;

    a.push('a');
    a.push('b');

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }

     while(!a.isEmpty()){
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;

    return 0;
}