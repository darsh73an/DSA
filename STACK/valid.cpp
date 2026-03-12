#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool validparenthesis(string str){

    stack<char> s;

    for(int i = 0; i < str.size(); i++){

        char ch = str[i];

        // opening brackets
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{
            if(s.empty()){ // if there is no opening bracket to match with closing barcket
                cout << "Invalid parenthesis" << endl;
            return false;
        }
        

        //matching opening with closing in stack
        char top = s.top();
        if( (top == '(' && ch == ')') ||
            (top == '{' && ch == '}') ||
            (top == '[' && ch == ']') ) {
                s.pop();
        }else{
            cout << "Invalid parenthesis" << endl;
            return false;
        }
    }
}
    cout << "valid"<< endl;
    return true;
}

int main(){

    string str = "({{({{({{}})}})}}{})";

    validparenthesis(str);

   
    return 0;
}