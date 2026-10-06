#include<iostream>
using namespace std;
// new keyword is used to allocate new memoryy

//which ever memory we create using new it will be created in heap memory so we must delete that otherwise it leads to memory leak
// that means in heap the memory will be created largely and if we not delete it then heap memory will be left with some memory while using that our system may crash

// in every c++ prog after it executes program then stack and heap memory will automatically get deleted

void printArr(){
     int size;
    cout <<"enter the size of an array :";
    cin >> size;

    int* arr = new int[size];

    int x = 0;
    for(int i=0; i<size; i++){
        arr[i] = x;
        x++;
        cout << x << " ";
    }
    cout<<endl;
}

int main (){
    printArr();
    return 0;
   
}