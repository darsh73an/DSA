#include<iostream>
using namespace std;
// 8-> 1000 7->0111  8 = 7-1       imp   8 & 7 = 0      ie num & num-1  =  0

bool isPowOf2(int num){
    if( !num & (num - 1) == 0){
        return false;
    } 
    else{
        return true;
    }
}

int main(){

   cout << isPowOf2(8)<< endl;

    return 0;
}