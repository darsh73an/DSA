#include<iostream>
using namespace  std;

class Car{
    public:
    string name;
    int price;
    int* milage;

    Car(string nameVal,int priceVal){
        this->name = name;
        this->price = price;
        milage = new int;
        *milage = 12;
    }

    Car(Car &original){      // custom copy constructor
        name = original.name;
        price = original.price;
        milage = new int;
        *milage = *original.milage;
    }

    //destructor
    ~Car(){
        cout << "deleting object..." << endl;

        if(milage != NULL){
            delete milage;
            milage = NULL;
        }
    }

};

int main(){

    Car c1("audi",1200000);
    Car c2(c1);

    *c2.milage =  10;

    cout << *c1.milage<<endl;
    cout << *c2.milage<<endl;
    
    return 0;
}


