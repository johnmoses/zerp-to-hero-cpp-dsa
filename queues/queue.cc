#include <iostream>
#include <queue>
#include <list>

using namespace std;

// implementation of queue with standard library
int main() {
    cout << "Queue from standard library" << endl;
    queue<int> q1;
    queue<int, list<int> > q2;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q2.push(4);
    q2.push(5);
    q2.push(6);
    q1.push(q2.back());
    while (!q1.empty()) {
        cout << q1.front() << ' ';
        q1.pop();
    }
    cout << ' ' << endl;
    while (!q2.empty()) {
        cout << q2.front() << ' ';
        q2.pop();
    }
    cout << ' ' << endl;
    return 0;
}