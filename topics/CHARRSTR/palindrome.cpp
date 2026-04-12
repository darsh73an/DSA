#include<iostream>
#include <cstring> 
using namespace std;

bool palindrome(char* word, int n){
    int st=0 , end = n-1;

    while(st<end){

        if(word[st++]!= word[end--]){       // if every st and end values are same then only valid palindrome
            cout << "not a palindrome\n";
            return false;
        }
    }
    cout << "valid palindrome\n";
    return true;
}

int main () {

   char word[] = "aabbaa";
   int n = strlen(word);

    palindrome(word,n);


    return 0;
}