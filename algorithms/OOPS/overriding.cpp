#include<iostream>
using namespace std;

// function overriding

//virtual funnc means its defined on parent or base class and same name as in child class when we call the func with same name the child class will be called everytime due to inheritance rhis is virtual func

class Parent{
public:
    void show(){
        cout << "this is parent show\n";
    }

    //nxt virtual function

    virtual void hello(){
        cout << "hello from virtual function..\n";
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "this is child show\n";
    }

    //virtual child
    void hello(){
        cout << "inherited virtual function from Parent class and used in child class\n";
    }
};


int main (){

    Child c1;
    c1.show(); // child show will be executed in run time

    //virtual
    Parent *ptr;  // ptr points to Parent
    ptr = &c1;

    ptr->hello();  // run time binding useing inheritnace

    return 0;
}