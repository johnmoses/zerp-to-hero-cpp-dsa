/*
* Introducing Queues
*/

#include <iostream>
#include <vector>

using namespace std;

class Queue {
    private:
        // Store elements
        vector<int> data;
        // define a pointer to indicate start position
        int p_start;

    public:
        Queue() {p_start = 0;}
        // Insert element, return true if successful
        bool enQueue(int x) {
            data.push_back(x);
            return true;
        }

        // Remove an element and return true if successful
        bool deQueue() {
            if (isEmpty()) {
                return false;
            }
            p_start++;
            return true;
        }

        // Get front item
        int front() {
            return data[p_start];
        }

        // Check if empty
        bool isEmpty() {
            return p_start >= data.size();
        }
    
};

int main() {
    Queue q;
    q.enQueue(5);
    q.enQueue(3);
    if (!q.isEmpty()){
        cout << q.front() << endl;
    }
    q.deQueue();
    if (!q.isEmpty()) {
        cout << q.front() << endl;
    }
    q.deQueue();
    if (!q.isEmpty()) {
        cout << q.front() << endl;
    }
    return 0;
}