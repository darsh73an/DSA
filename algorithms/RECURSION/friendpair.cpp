#include<iostream>
using namespace std;

// n no of friends where a friend can stand aloone or stand with another friend only 2  means pair


int friendpair(int n){
    //BC
    if( n == 1 || n == 2){  // if n is 1 return 1 else erturn n
        return n;
    }

    // single standing
    int single = friendpair(n-1);  // if 1 element is standing alone then n-1 elements remains

    // pair
    int pair = friendpair(n-2) * (n-1); // n-1 for in pair if one element is confirmed for another n-1 and n-2 for remaining elements

    return single + pair;
}

int main(){

    cout << friendpair(3) << endl;

    return 0;
}