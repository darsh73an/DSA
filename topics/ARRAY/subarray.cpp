#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3};    // 1,3 is not an sub array
    int n = sizeof(arr) / sizeof(int);

    // starting index
    for (int st = 0; st < n; st++) {

        // ending index
        for (int end = st; end < n; end++) {

            // print subarray from st to end
            for (int i = st; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
