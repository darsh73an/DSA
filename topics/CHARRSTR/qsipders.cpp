#include<iostream>
using namespace std;

int main() {

    string s = "hi their how are you";
    int wordCount = 1;

    //1
    for(char i : s){
        if(i == ' '){
        wordCount++;
        }
    }

    cout << wordCount << endl;


    //2
    for(int i=0; i<s.size(); i++){
        if(s[i-1] == ' ' || i ==0){
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;

    //3
    int st = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' ' || i == s.size()-1){
            int end = i-1;

            while(st < end){
                swap(s[st++],s[end--]);
            }
            st = i+1;
        }
    }

    cout << s << endl;


    
    //4
    string s2 = "ewhw whvvw wvwv";
    char s1 = 'w';

    //erase(index, length);

    for(int i=0; i<s2.size(); i++){
        if(s2[i] == s1){
            s2.erase(i,1);
            i--;
        }
    }

    cout << s2 << endl;


    

    return 0;
}

//