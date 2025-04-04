#include <iostream>

#define qsize 5

using namespace std;

struct queue {
    int arr[qsize];
    int f, r;
};
typedef struct queue Queue;

void enqueue (Queue * q, int x) {
    if (q->r == qsize - 1)
        cout << "QUEUE OVERFLOW" << endl;
    else
        q->arr[++q->r] = x;
}

int dequeue (Queue * q) {
    if (q->f - q->r == 1)
        cout << "Queue Underflow" << endl;
    else
        return (q->arr[q->f++]);
}

int main() {
    cout << "Queue" << endl;

    Queue q;
    q.f = 0;
    q.r = -1;
    while (1) {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "0. Exit" << endl;
        int c;
        cin >> c;
        switch (c) {
            case 0:
                cout << "Ended" << endl;
                return 0;
            case 1:
                cout << "Enter element to enqueue" << endl;
                int x;
                cin >> x;
                enqueue (&q, x);
                break;
            case 2:
                if (q.f - q.r == 1)
                    cout << "Queue underflow" << endl;
                else
                    cout << "Dequeued element is " << dequeue (&q) << endl;
                break;
            case 3:
                cout << " Elements of queue are" << endl;
                if (q.r - q.r == 1) {
                    cout << "Queue is empty" << endl;
                    break;
                }
                int i;
                for (i = q.f; i <= q.r; i++)
                    cout << q.arr[i] << ", ";
                cout << endl;
            default:
                cout << "Make a Choice" << endl;
        }
    }

    return 0;
}