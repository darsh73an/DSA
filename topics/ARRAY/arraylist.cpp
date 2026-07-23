#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector = ArrayList (Dynamic Array)
    vector<int> arr = {10, 20, 30};

    // Add element at end (O(1) amortized)
    arr.push_back(40);

    // Insert 25 at index 2
    // Internally: 30 and 40 are shifted right
    arr.insert(arr.begin() + 2, 25);

    // Delete element at index 1
    // Internally: remaining elements shift left
    arr.erase(arr.begin() + 1);

    // Access element by index (O(1))
    cout << "Element at index 2: " << arr[2] << endl;

    // Print all elements
    for (int x : arr)
        cout << x << " ";

    cout << "\nSize: " << arr.size();         // Number of elements
    cout << "\nCapacity: " << arr.capacity(); // Total allocated space

    // If capacity becomes full,
    // vector creates a bigger array,
    // copies all elements,
    // then deletes the old array.




    
    // ====================== TIME & SPACE COMPLEXITIES ======================

// push_front()      -> TC: O(n)           SC: O(1)
// push_back()       -> TC: O(1) amortized SC: O(1)
//                     Worst Case: TC: O(n), SC: O(n) (during resize)

// push_middle()     -> TC: O(n)           SC: O(1)
// push_at_index()   -> TC: O(n)           SC: O(1)

// pop_front()       -> TC: O(n)           SC: O(1)
// pop_back()        -> TC: O(1)           SC: O(1)
// pop_middle()      -> TC: O(n)           SC: O(1)
// pop_at_index()    -> TC: O(n)           SC: O(1)

// access(index)     -> TC: O(1)           SC: O(1)
// update(index)     -> TC: O(1)           SC: O(1)

// search()          -> TC: O(n)           SC: O(1)

// =======================================================================

    return 0;
}