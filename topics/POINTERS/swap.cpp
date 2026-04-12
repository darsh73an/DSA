#include<iostream>
using namespace std;

void swap(int* a , int* b ){
    int change = *a;
    *a = *b;
    *b = change;
;}

int main () {

   
    int a = 5;
    int b = 10;

    float num = 3.1423 ;

    float* poi = &num;
    int *ptr = &a;

     cout << "before swap a :" << a << " b  :" << b << endl;  
    swap(&a , &b);
    cout << "after swap a :" << a << " b  :" << b << endl;

    cout << &a << " = " << ptr << endl; // 0x7fff4b180ad4 = 0x7fff4b180ad4
    cout << *ptr << " = " << a << endl; // 5 = 5

    return 0 ;
}