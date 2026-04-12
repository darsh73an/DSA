#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;

    Car(string nameVal, string colorVal) {
        name = nameVal;
        color = colorVal;
    }
};

int main() {
    Car c1("audi 450", "red");
    Car c2(c1);   // copy constructor

    cout << c2.name << endl;
    cout << c2.color << endl;

    return 0;
}
