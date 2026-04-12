#include <iostream>
using namespace std;

void printSubsets(string str) {
    int n = str.size();
    int total = 1 << n;   // 2^n

    for (int mask = 0; mask < total; mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                cout << str[i];
            }
        }
        cout << "\n";
    }
}

int main() {
    string str = "abc";
    printSubsets(str);
    return 0;
}