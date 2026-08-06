#include<iostream>
#include<string>
using namespace std;



int main () {

    string str = "apna school and college and";


    //both are same
    cout << str[3]<<endl;
    cout << str.at(3)<<endl;

    //sub string
    cout << str.substr(0,5)<<endl;
   
    cout << str.find("and")<<endl; // output will be the starting index of and

    cout << str.find("and",23)<<endl; // if there are two or more same word then we can verify it from that index 


    return 0;
}