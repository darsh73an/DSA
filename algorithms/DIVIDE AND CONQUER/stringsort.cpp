#include <iostream>
#include <vector>
using namespace std;

void merge(vector<string> &arr, int si, int mid, int ei) {
    vector<string> temp;

    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {   // lexicographic compare
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= ei) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back to original array
    for (int k = 0; k < temp.size(); k++) {
        arr[si + k] = temp[k];
    }
}

void mergeSort(vector<string> &arr, int si, int ei) {
    if (si >= ei) return;

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
}

int main() {

    vector<string> arr = {"earth", "sun", "moon", "jupiter"};

    mergeSort(arr, 0, arr.size() - 1);

    for (string s : arr) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
