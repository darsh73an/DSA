#include<iostream>
using namespace std;

int clearijth(int num,int i,int j){

    int left  = ~(0) << (j + 1);  // ~0 means 00000000 converted to 11111111
    int right = (1 << i) - 1;  // normal bitmask 1<<i
    int bitMask = left | right;


   return (num & bitMask);

}

int main(){

    cout << clearijth(10,2,3);

    return 0;
}