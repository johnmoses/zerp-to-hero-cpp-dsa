# Linked List
A linked list is a linear data structure where each element is actually a separate object and all the objects are linked together by the reference field in each element.

## Types of Linked Lists
There are two types of linked list: singly linked list and doubly linked list.

Linked List operations
- Insert
- Delete

```cpp
/** Helper function to return the index-th node in the linked list. */
SinglyListNode* getNode(int index) {
    SinglyListNode *cur = head;
    for (int i = 0; i < index && cur; ++i) {
        cur = cur->next;
    }
    return cur;
}
/** Helper function to return the last node in the linked list. */
SinglyListNode* getTail() {
    SinglyListNode *cur = head;
    while (cur && cur->next) {
        cur = cur->next;
    }
    return cur;
}
/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int get(int index) {
    SinglyListNode *cur = getNode(index);
    return cur == NULL ? -1 : cur->val;
}