#include<iostream>
using namespace std;

int clearith(int num,int i){

    int bitMask = ~(1 << i) ;

    return (num & bitMask);

}

int main(){

   cout << clearith(6,1)<< endl;

    return 0;
}