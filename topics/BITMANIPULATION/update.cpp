#include<iostream>
using namespace std;

void updateith(int num, int i, int val){


    //step 1 -> clear ith bit
    num = num & ~(1 << i);

    //step 2 -> set ith bit
    num = num | (val << i);


    cout << num << endl;
    
}

int main(){

    updateith(7,3,1);

    return 0;
}