#include<iostream>
using namespace std;



 int main () {
    int a = 10;
    int &b = a;

    cout << a << " = " << b << endl;    // both the adres of a and b are same , b is just a ref variable of a
                                        // ref variable should be first verified eg-> int &h = k;

    return 0;
 }
