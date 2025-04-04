/*
* Introducing Hashes
*/

#include <iostream>
#include <unordered_set>

using namespace std;
// using namespace unordered_set;

int main() {
    unordered_set<int> hashset;

    // Insert items
    hashset.insert(3);
    hashset.insert(2);
    hashset.insert(1);

    // Delete a key
    hashset.erase(1);

    if (hashset.count(2) <= 0) {
        cout << "Key 2 is not in the hashset" << endl;
    }

    cout << "Hashset contains: " << hashset.size() << " Elements" << endl;

    hashset.clear();

    if (hashset.empty()) {
        cout << "Hashset is cleared now!" << endl;
    }
}