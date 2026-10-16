#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int sum = 0;    
    
    while(n > 0){
        sum +=n;
        n--;
    }
    cout << sum;
    return 0;
}