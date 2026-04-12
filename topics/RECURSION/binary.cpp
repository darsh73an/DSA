#include<iostream>
using namespace std;

// print all Binary no of size n without any consecutive 1's

void binary(int n,int lastPlace,string ans){
    //BC
    if( n == 0){
        cout << ans << endl;
        return;
    }

    if(!lastPlace == 1){
        binary(n-1,0,ans+'0');
        binary(n-1,1,ans+'1');
    }
    else{ // lastPlace == 0
        binary(n-1,0,ans+'0');  // n-1 bcoz one lastelement is already selected
    }
}

int main(){

    string ans = "";

    binary(4,0,ans);

    return 0;
}