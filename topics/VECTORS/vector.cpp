#include<iostream>
#include<vector>
using namespace std;
// vectors is like dynamic arrays but not fully it can be resized dynamically at run time  and stored contiguosly in memory
// vector<int> vec; are stored in sequential
// here the meory will automatically allocate and deallocate it self in its library

// constructor is a fucn which is used to initialize a objec

int main (){

    // to print size
    vector<int> vec;
    cout << vec.size() << "\n";  // 0

    //fll constructor
    vector<int> vect(5,-1); // 5->size -1->every value is initialized with -1
    cout << vect.size()<<"\n";

    //printing vec elements
    vector<int> vecto(10,-1);

    for(int i=0; i<vecto.size(); i++){
        cout << vecto[i]<<" ";          // *(vector + i)  compiler's view
    }
    cout << endl;


    //size and capacity
    vector<int> vec1 = {1,2,3,4,5};

    cout << "size of vec1 :" << vec1.size() << endl;
    cout << "capacity of vec1 :" << vec1.capacity() << endl;

    vec1.push_back(6);

    cout << "size of vec1 after adding 6 :" << vec1.size() << endl;
    cout << "capacity of vec1 after adding 6:" << vec1.capacity() << endl;

    return 0;
}