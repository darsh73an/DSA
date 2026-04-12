#include<iostream>
using namespace std;

//static

// when we use static keyword the function will be called or executed once in lifetime and its memory in call stack wont get deleted its stays lifetime or until the program get deleted
// for below example the static count will run once and it will not run again and again the count++; will run


void Counter1(){
    int count = 0;
    count++;
    cout << "without using static count :" << count << endl;
}

void Counter2(){
    static int count = 0;
    count++;
    cout << "with using static count :" << count << endl;
}


int main(){

    Counter1();
    Counter1();
    Counter1();

    Counter2();
    Counter2();
    Counter2();

    

    return 0;
}