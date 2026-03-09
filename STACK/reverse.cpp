#include<iostream>
#include<string>
#include<stack>
using namespace std;


// using extra space
string reverse(string str){
    string ans;
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }

    return ans;

}

int main(){

    string str = "dcba";

    cout <<  reverse(str) << endl;

    return 0;
}