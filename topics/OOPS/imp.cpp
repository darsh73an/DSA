#include<iostream>
using namespace  std;

//getters and setters are used to provide access to properties of class indirectly

// encapsulation is wrapping data(prpperties eg-name) and member functions(void getCgpa()) in an single unit and it also implements data hiding
// data mem and member functions OR data and methods

class Pilot{            // we cannot access its properties outside class  --->>>  private can be accessed in friend function
    private:
        string name;        // now only name is private no need to write private or we can write for better understanding
        int age;

    public:                 // now we can acces the data or properties of class Pilot
        int id;
        string gender;

        void takeOff(){
            cout << "flight is ready to take off"<<endl;
        }

        Pilot(){
            cout << "this is a constructor"<<endl;
        }

        
    //setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setAge(int ageVal){
        age = ageVal;
    }

    // getters
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }


};

int main(){

    Pilot p1;
    Pilot p2; // creating objects from class Pilot 

    p1.id = 18972;
    cout << p1.id << endl;
    p1.takeOff();

    // name is private now now we are accesing name via getters and setters
    p1.setName("darshan");
    p1.setAge(19);

    cout << p1.getName() << endl;
    cout << p1.getAge() << endl;
 
    
    return 0;
}


