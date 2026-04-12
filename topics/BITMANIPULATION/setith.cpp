#include<iostream>
using namespace std;
//set ith bit for any number go to ith bit and chnage the vlaue if its 0 change to 1 if its i leave it as it is


int setithbit(int num,int i){
    int bitMask = 1<< i;
    return (num | bitMask);
}

int main(){

    cout << setithbit(6,3)<< endl;


    return 0;

}
