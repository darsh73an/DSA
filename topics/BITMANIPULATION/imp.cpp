#include<iostream>
using namespace std;

// to do ~ OR tilde operation there are some steps
// for any numbers take 32bits ie 8byte the first is MSB after 1's compliment
// step 1 -> eg 6 00000110 take its 1's compiment ie 11111001
// step2 -> check MSB most significant byte which is first if its 1 then -ve if 0 then +ve for 6 its 1 then -ve
// step3 -> add one in right then 0000111 then its -7 bcoz MSB is 1 and leave MSB then 7 numbers 


// to check odd or even num & 1 = 1 then odd if 0 then even

int main(){

    cout << (~6)<< endl;    // -7
    cout << (~0)<< endl;    // -1

    // a << b   =   a * 2^b
    cout << (7 << 2) << endl;   // 28  write 7 in 8byte and left shit zeros to right side then 00001110 to 00011100


    // a >> b  =  a / 2^b
    cout << (7 >> 2) << endl;   // 1   0000111 to 0000001

    cout << ~4 << endl;
    cout << (8 >> 1) << endl;

    //odd or even

    // num & 1 != 0 odd otherwise even
    cout << ( 5 & 1 ) << endl;  // 1
    cout << ( 8 & 1 ) << endl;  // 0

    return 0;
}