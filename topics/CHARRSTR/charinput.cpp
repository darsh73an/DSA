#include<iostream>
#include <cstring> 
using namespace std;

int main () {

    char word[20];   
    // cin >> word; // it ingores white spaces eg apna college the length is 4

    cin.getline(word,20,'*'); // here white space is not ignored and counted  and 20 is maxsize 

    
// * is used to terminate the string  in input in terminal

    cout << "you entered this :" << word << endl;
    cout << " length :" << strlen(word) << endl;

    return 0;
}
