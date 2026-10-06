#include<iostream>
using namespace std;

// compile time polymorphism

// function overloading
// operator overloading  -->> next file ie operatoroverloading.cpp

// One-line MCQ Tricks ✍️

// virtual keyword → runtime polymorphism

// Same function name, different behavior → polymorphism

// No virtual → base class function called

// With virtual → derived class function called

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