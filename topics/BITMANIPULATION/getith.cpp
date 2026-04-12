#include<iostream>
using namespace std;

int ith(int num,int i){
    int bitMask = 1 << i ;

    // not 1 
    if(!(num & bitMask)){ // (num & bitMask) ? 0 : 1    if false then ith element is zero  num & bitMask = 1 then true
        return 0;
    }
    else{
        return 1;         // if ith is non zero
    }

}

int main(){

    cout << ith(6,2)<< endl;  // 1
    cout << ith(6,3)<< endl; // 0


    return 0;
}