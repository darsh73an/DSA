#include<iostream>
#include<stack>
#include<string>
using namespace std;

// whatever inside this (a) its valid if no inside this () then invalid

bool DuplicateParenthesis(string str){
    stack<char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        
        if( ch != ')'){
            s.push(ch);
        }else{
            if(s.top() == '('){ // if again ( found once again
                cout << "false\n";
                return false;
            }

            while( s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    cout << "true\n";
    return true;
}

int main(){

    string str = "(((a+b) + (a+b)))";

    DuplicateParenthesis(str);

   
    return 0;
}