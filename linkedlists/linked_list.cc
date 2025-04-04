#include <iostream>
#include <cstring>

using namespace std;

typedef struct node {
    int data;
    node *next;
} node;

bool hash[100];

node* init(int a[], int n) {
    node *head, *p;
    for (int i = 0; i < n; ++i) {
        node *nd = new node();
        nd->data = a[i];
        if (i == 0) {
            head = p = nd;
            continue;
        }
        p->next = nd;
        p = nd;
    }
    return head;
}

void removedulicate1(node *head) {
    if (head == NULL) return;
    node *p, *q, *c = head;
    while (q) {
        if (q->data == c) {
            node *t = q;
            p->next = q->next;
            q = p->next;
            delete t;
        } else {
            p = q; q = q->next;
        }
    }
    c = c->next;
}

void print(node *head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    cout << " linked list " << endl;

    int n = 10;
    int a[] = {3,2,1,3,5,4,2,6,3,1};
    // memset(hash, false, sizeof(hash));
    // node *head = init(a,n);
    // removedulicate1(head);
    // print(head);
    return 0;
}