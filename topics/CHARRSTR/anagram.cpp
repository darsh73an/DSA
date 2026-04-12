#include<iostream>
#include<string>
using namespace std;

// if the both strings having same length and can form a word then its is a anagram and its TC is 0(n) bcoz no nested loop

bool anagram(string str1,string str2){

    if(str1.length() != str2.length()){ // both strings must be same if it has to be anagaram
        cout << "Not an anagram \n";
        return false;
    }

    int count[50]={0};

    for(int i=0; i<str1.length(); i++){
        int idx =  str1[i]-'a';         // adding indexs in count
        count[idx]++;
    }
    for(int i=0; i<str2.length(); i++){
        int idx = str2[i]-'a';
         if(count[idx] == 0){           // check whether the idx is present if not not a valid anagarm
            return false;
         }
         count[idx]--;                  // if idx found in count then --
    }

    cout << "Valid anagarms \n";
    return true;
}

int main () {

    string str1 = "anagram";
    string str2 = "naaram";

    anagram(str1,str2);
  

    return 0;
}