/*
* My Hash Set
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class MyHashSet {
    public:
        vector<list<int> > store;
        int size;

        MyHashSet() {
            size = 100;
            store.resize(size);
        }

        int hash(int key) {
            return key%size;
        }

        list<int> :: iterator search(int key) {
            int i = hash(key);
            return find(store[i].begin(), store[i].end(), key);
        }

        void add(int key) {
            if(contains(key)) return;
            int i = hash(key);
            store[i].push_back(key);
        }

        void remove(int key) {
            if(!contains(key)) return;
            int i = hash(key);
            store[i].erase(search(key));
        }

        bool contains(int key) {
            int i = hash(key);
            if(search(key)!=store[i].end()) return true;
            else return false;
        }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main() {
    // MyHashSet hs = MyHashSet();
    // hs.add(1);
    // hs.add(2);
    // hs.remove(1);
    // bool param_3 = hs.contains(1);
    MyHashSet* hs = new MyHashSet();
    hs->add(1);
    hs->add(2);
    hs->remove(1);
    bool param_3 = hs->contains(2);

    cout << param_3 << endl;
    return 0;
}