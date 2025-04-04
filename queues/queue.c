#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *pre;
} * head, *tail, *tmp;

// global variables
int count = 0;

// forward declarations
void create();
void enqueue(int x);
int dequeue();
int peek();
int size();
int isEmpty();

void create() {
    head = NULL;
    tail = NULL;
}
void enqueue(int x) {
    if (head == NULL) {
        head = (struct node *)malloc(1 * sizeof(struct node));
        head->data = x;
        head->pre = NULL;
        tail = head;
    } else {
        tmp = (struct node *)malloc(1 * sizeof(struct node));
        tmp->data = x;
        tmp->next = tail;
        tail = tmp;
    }
}
int dequeue() {
    int returnData = 0;
    if (head == NULL) {
        printf("ERROR: Dequeue from empty queue. \n");
        exit(1);
    } else {
        returnData = head->data;
        if (head->pre == NULL)
            head = NULL;
        else
            head = head->pre;
        head->next = NULL;
    }
    return returnData;
}
int peek() {
    if (head != NULL)
        return head->data;
    else {
        printf("ERROR: Peeking from empty queue.");
        exit(1);
    }
}
int size() { return count; }
int isEmpty() {
    if (count == 0)
        return 1;
    return 0;
}

int main(int argc, char const *argv[]) {
    printf("Queue\n");

    int x;

    create();
    enqueue(5);
    enqueue(7);

    printf("Size: %d, Empty: %d ", size(), isEmpty());
    printf("\n");

    return 0;
}