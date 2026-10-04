#include<iostream>
using namespace std;

//TM 0()
void printSubsets(string &str,string subset,int i){
    //BC
    if(i == str.size()){
        cout << subset << "\n";
        return;
    }

    // taking a
    printSubsets(str,subset + str[i],i+1);

    //without a
    printSubsets(str,subset,i+1);
}


int main(){


    string str = "abc";
    string subset = "";

    printSubsets(str,subset,0);

    return 0;
}


// TM 0(n^2)
// void printSubsets(string str,string subset){
//     //BC
//     if(str.size() == 0){
//         cout << subset << "\n";
//         return;
//     }

//     char idx = str[0];

//     //yes choice   means we are adding a
//     printSubsets(str.substr(1) , subset + idx);  // str.substr(1) means subset of 1 to n

//     //no choice   means we are not adding a moving to b and c
//     printSubsets(str.substr(1) , subset);
// }