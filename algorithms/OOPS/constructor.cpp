#include<iostream>
using namespace  std;

//constructor is used to allocate a memory to a object
//and destructor is used to remove the memory of an object

//constructor is special internal function which is invokedd automatically when and obj is created
//constructor are used for initializaton of data(properties)
 //we create constructors in public for accessing it in main function

    // only called once at obj creation and memory allocation happens at when constructor is called


class Plane{
    string name;
    string color;
    int id;
  
public: 
    Plane(string nameVal,int idVal,string colorVal){ //constructor and class name will be same and doesnt have a return type
        cout << "object created succesfully  constructor is being invoked or called"<<endl;
        name = nameVal;
        id = idVal;
        color = colorVal;  // this->name = name in parameter write only name 
    }

    //setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setAge(int idVal){
        id = idVal;
    }
    void setColor(string colorVal){
        color = colorVal;
    }

    // getters
    string getColor(){
        return color;
    }
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }

    void takeOff(){
        cout << "plane has been takeoff sucessfully"<< endl;
    }
    void land(){
         cout << "plane has been landed sucessfully"<< endl;
    }

};

int main(){

    Plane p1("aston martin",420,"balck");

    cout << "plane name :"<< p1.getName() << endl ;
    cout << "plane id :"<< p1.getId() << endl ;
    cout << "plane color :"<< p1.getColor() << endl ;
  
    
    return 0;
}


