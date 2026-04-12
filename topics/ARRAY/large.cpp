#include<iostream>
using namespace std;

int main () {

    int arr[5] = { 5 , 4 ,3 , 7 , 12 };
    int n = sizeof(arr) / sizeof(int);

    int MAX = arr[0];

    for ( int indx = 0 ; indx < n ; indx ++) {
        if(arr[indx] > MAX) {
         MAX = arr[indx] ;
    };
    }

    cout << "largest ele in array :" << MAX << endl;

   


    return 0;
}