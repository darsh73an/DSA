#include<iostream>
using namespace std;

void fastExpo(int x,int n){
    int ans = 1;

   while( n > 0 ){  // for only +ve numbers
     int lastBit = n & 1;

        if(lastBit){  // means 1 if lastdig is 1 ie true
            ans *= x;
        }
        x = x * x;
        n = n >> 1;
   }
    cout << ans << endl;

    
}

 
int main () {

    fastExpo(5,4); 

    return 0;
}


