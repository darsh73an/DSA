#include<iostream>
using namespace std;


// A ->> 65   B->>66   a->>97

int main () {
    
        int a = 32 ;                // a=32
        int * ptr = &a;             // *ptr = 32

        char ch = 'A';              // ch =  65
        char &cho = ch;             // cho = ch


        cho += a;                   // cho = A + a = 65 + 32   cho = 97  ch=97 97 means a in character
        *ptr += ch;                 // *ptr = *ptr + ch =  32 + 97 =  129   *ptr = 129 and *ptr = a  

        cout << a << "," << ch <<endl;     // a=129 ch=a

    return 0;
}