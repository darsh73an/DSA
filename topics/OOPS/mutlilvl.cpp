#include<iostream>
using namespace std;

// multi level inheritance


class Animal{
  public:  
    void eat(){
        cout << "animal eats food...\n";
    }
    void breathe(){
        cout << "animals breathing...\n";
    }
};


class Mamal : public Animal{  
  public:
   string bloodtype = "warm";
   Mamal(){
    bloodtype =  "warm";
   }

};

class Dog : public Mamal{  
  public:
  void tail(){
    cout << "dogs tail\n";
  }

};



int main (){

    Dog d1;

    d1.eat();
    d1.breathe();
    d1.tail();
    cout << d1.bloodtype << endl;
   

    return 0;
}