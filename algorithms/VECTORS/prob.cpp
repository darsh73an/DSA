#include<iostream>
#include<vector>
using namespace std;



int main (){

    vector<int> v;

    for(int i=0; i<5; i++){
        v.push_back(i);
    }
    cout << v.size() << endl;  // 0 , 1 , 2 , 3 , 4   size->5
    cout << v.capacity() << endl; // 1 , 2 , 4 , 8    capacity->8

    
  
    return 0;
}