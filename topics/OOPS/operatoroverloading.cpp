#include<iostream>
using namespace std;

// compile time polymorphism

// operator overloading  
class Print{
public:
    void show(int x){
        cout << "value of x :" << x << endl;
    }
    void show(string y){
        cout << "string y is :" << y << endl;
    }
};


int main (){

    Print p1;

    p1.show(10);
    p1.show("shraddha khapra");

    return 0;
}