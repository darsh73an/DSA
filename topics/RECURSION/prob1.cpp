#include <iostream>
using namespace std;

// not done

int countSubstr(string str, int i, int j) {

    // Base Case
    if (i > j)
        return 0;

    if (i == j)
        return 1;

    int ans = countSubstr(str, i + 1, j)
            + countSubstr(str, i, j - 1)
            - countSubstr(str, i + 1, j - 1);

    if (str[i] == str[j])
        ans += 1;

    return ans;
}

int main() {

    string str = "aba";

    cout << countSubstr(str, 0, str.length() - 1);

    return 0;
}
