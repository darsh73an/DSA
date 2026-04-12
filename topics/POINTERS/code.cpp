#include <iostream>
using namespace std;

int main() {
    int var = 557;      // A simple integer (using your VTU subject code!)
    int* ptr = &var;    // A pointer storing the address of var
    int** ptrr = &ptr;  // A double pointer storing the address of ptr
    
    int* pointer = NULL; // it will not store the address of another variable , stores 0



     // pointer is a special variable that stores the address of another variable and denoted by int* a  , &a
    // & --> address of variable


   
    // cout << "DSA POINTER TEST SUCCESSFUL" << endl;
  
    // cout << "Value of var: " << var << endl;
    // cout << "Memory Address of var (&var): " << &var << endl;
    // cout << "Address stored in ptr: " << ptr << endl;
    // cout << "Value retrieved via ptr (*ptr): " << *ptr << endl;

        // Data Type	Size of Variable (Typical)	Size of Pointer to Type (type*)
        // char	1 byte	8 bytes (on 64-bit)
        // int	4 bytes	8 bytes (on 64-bit)
        // float	4 bytes	8 bytes (on 64-bit)
        // double	8 bytes	8 bytes (on 64-bit)
        // long long	8 bytes	8 bytes (on 64-bit)
        // void	N/A (cannot declare)	8 bytes (on 64-bit)


        // int** a is a double pointer which stores the address of an int* pointer variable.

        cout << "size fo char : " << sizeof(char) << " bytes" << endl;
        cout << "size fo int : " << sizeof(int) << " bytes" << endl;
        cout << "size fo float : " << sizeof(float) << " bytes" << endl;
        cout << "size fo double : " << sizeof(double) << " bytes" << endl;
        cout << "size fo long long : " << sizeof(long long) << " bytes" << endl;
        cout << "size fo void* : " << sizeof(void*) << " bytes" << endl;    


        cout << "double pointer :"<< **ptrr << endl;
        cout << "single pointer :"<< *ptr << endl;

        cout << pointer << "\n";

    return 0;
}