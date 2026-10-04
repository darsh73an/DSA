#include <iostream>
#include <string>
using namespace std;

// need to practice

bool oneSwapPossible(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) return false;

    int a = -1, b = -1;   // mismatch indices

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            if (a == -1) a = i;
            else if (b == -1) b = i;
            else return false; // more than 2 mismatches
        }
    }

    // 0 mismatches (already same) OR
    // exactly 2 mismatches that can be fixed by one swap
    return (a == -1) ||
           (b != -1 && s1[a] == s2[b] && s1[b] == s2[a]);
}

int main() {
    string s1 = "bank";
    string s2 = "kanb";

    cout << (oneSwapPossible(s1, s2) ? "YES" : "NO");
    return 0;
}