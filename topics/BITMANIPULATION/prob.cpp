#include<iostream>
using namespace std;

void clrlastbit(int num,int i){
    int bitMask = ~0 << i;
    num = num & bitMask;

    cout << num << endl;
}

int main(){

   clrlastbit(15,2);

    return 0;
}