#include <iostream>
#include <string>
using namespace std;

//shallow copy in this if any change sare made in c1 constructor then c2 contrcutor values also be chaned
// deep copy which is opposite to shallow copy any change sin c1 doesnt chnage c2

class Car {
public:
    string name;
    string color;
    int* milage;

    Car(string nameVal, string colorVal,int milageVal) {  // constructor
        this->name = nameVal;
        this->color = colorVal; // static allocation means complier is  allocating and de allocating thr memory
        milage = new int;       // dynamic allocation means we are allocating
        *milage = 12;
    }

    Car(Car &original){                                   // custom copy constructor
        cout << "copying original arr to new"<< endl;
        name = original.name;
        color = original.color;
        milage = original.milage;
        //for  deep copy
        // milage = new int;              new memory
        // *milage = *original.milage;    storing value of milage in new address
    }
};

int main() {
    
    Car c1("buggati","white",12);

    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.milage << endl;

    *c2.milage = 10;

    cout << *c1.milage << endl;  // here also value will be changed ie 10



    return 0;
}
