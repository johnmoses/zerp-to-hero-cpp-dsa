/*
* Hash Map example
*/

#include <iostream>

using namespace std;

class HashMap{
    public:
        int a[1000001];
        HashMap() {
            ios_base::sync_with_stdio(false);
            memset(a, -1, sizeof(a));
        }

        void put(int key, int val) {
            ios_base::sync_with_stdio(false);
            a[key] = val;
        }

        int get(int key) {
            return a[key];
        }

        void remove(int key) {
            a[key] = -1;
        }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main() {
    HashMap* hm = new HashMap();
    hm->put(1,1);
    hm->put(2,2);
    int param = hm->get(1);
    int param_1 = hm->get(2);
    hm->remove(1);
    cout << param_1 << endl;
    return 0;
}