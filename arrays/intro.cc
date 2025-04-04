/*
Write code to show the basic functionality or behavior of an array
such as selecting, slicing, adding items, removing items, sorting, etc.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Selecting an item
    cout << "Selecting item at index 2: " << v[2] << endl;

    // Slicing the vector
    cout << "Slicing vector from index 1 to 3: ";
    for (int i = 1; i <= 3; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Adding an item
    v.push_back(6);
    cout << "Vector after adding 6: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Removing an item
    v.erase(v.begin() + 2);
    cout << "Vector after removing item at index 2: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting the vector
    sort(v.begin(), v.end());
    cout << "Vector after sorting: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
