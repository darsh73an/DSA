#include<iostream>
using namespace std;

void oddeven(int num){
    if(num & 1 != 0){
        cout<<"odd\n";
    }else{
        cout<<"even\n";
    }
}

int main(){

    oddeven(5);
    oddeven(8);



    return 0;
}