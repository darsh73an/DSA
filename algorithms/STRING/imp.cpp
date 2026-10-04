#include<iostream>
using namespace std;

// literals means the value is fixed like 'apna college'

// char str[10]; fixed size cannot be chnages at run time
// string str[10]; can be changed at run time


int main () {


    int cha = 'a';
    int ch2 = 'A';
    int ch3 = '%';
    int ch4 = '9';
    int ch5 = '\n'; // -> next 
    int ch6 = '\t'; // -> tab space


    char ch = 'a';

    cout << ch << endl;         // a
    cout << (int) ch << endl;   // 97


    char charr = 'd';           // same for capital
    int pos = charr - 'a';      // same for capital

    cout << pos << endl;        // same for capital ie 3


    char work[5] = "code";          // 5 beacuse null character in this no need to write '\o'
    cout << work << sizeof(work)<< endl;


    //char ch[10] = "bell"
    // ch = "hello";  not posiible

    //string str[10] = "bekbs";
    //str = "hello wor"; possible

    string str;
    getline(cin,str); // no need to define size 
    getline(cin,str,'$'); // hello from $ kok  printed output -> hello from

    // and we can print the chars of elements by str[0] str[1] str[2]


    return 0;
}