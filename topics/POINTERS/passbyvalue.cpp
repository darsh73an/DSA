#include<iostream>
using namespace std;

void changeA(int a){   //  a value only chaned in changeA function
     a = 20;
    cout << a << endl;
};

void changeB(int parameter ) {
    parameter = 15;
    cout << parameter << endl;
};

int main () {  // a value remain same as 10

    int a = 10;
    changeA(a);
    cout << a << endl;

    int b = 5;
    cout << b << endl;
    changeB(b);         // no need to write b we can use different name as parameter
    
    return 0;
}