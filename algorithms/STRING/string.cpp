#include<iostream>
#include<string>
using namespace std;


int main () {

    string str1 = "abc";    // 97,98,99
    string str2 = "def";    // 100,101,102

    cout << ( str1 == str2 ) << endl;   // 0  bcoz the values are bigger 
    cout << ( str1 != str2 ) << endl;   // 1
    cout << ( str1 < str2 ) << endl;    // 1
    cout << ( str1 > str2 ) << endl;    // 0

    return 0;
}