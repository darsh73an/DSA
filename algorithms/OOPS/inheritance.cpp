#include<iostream>
using namespace std;

// inheritance demo

class Animal{
  public:  // if we want to acces this public props we have to declare it in derived class under for protected and outside class for public
    string name;
    void eat(){
        cout << "animal eats food...\n";
    }
    void breathe(){
        cout << "animals breathing...\n";
    }
};

// if u want to keep  data private and also sccess it in derived class then use protected


class Fish : public Animal{  // for  inheriting or accessing the properties of Animal by default it will be private so we write public
// here public Animal is the mode which u want to keep the data of  Fish

  public:

    int fins;
    void swim(){
        eat();   // for protected here we can write data of parent class and not outside the class
        cout << "fins are swimming" << endl;
    }

};

// class Fish : protected Animal{  // for  inheriting or accessing the properties of Animal by default it will be private so we write public
//   public:
//     int fins;
//     here we can acces the properties of oarent class not outside the class
//     eat();
//     void swim(){
//         cout << "fins are swimming" << endl;
//     }

// };

int main (){

    Fish shark;

    shark.fins = 10;
    cout << shark.fins << endl;
    shark.swim();
   

    return 0;
}