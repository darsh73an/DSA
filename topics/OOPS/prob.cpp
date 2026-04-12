#include<iostream>
using namespace  std;


class Student{

    int id;
    string password;

    public:
    string username;

    //parameterized constructor
    Student(int id){
        this->id = id;
    }

    //setter
    void setPassword(string passwordVal){
        password = passwordVal;
    }
    //getter
    string getPassword(){
        return password;
    }

};

int main(){

    Student s1(42);
    s1.username = "darshan";
    s1.setPassword("a1b2c3d4");

    cout << "username of s1 : " << s1.username << endl;
    cout << "password of s1 : " << s1.getPassword() << endl;
    
    return 0;
}


