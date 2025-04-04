/*
* Introduction to Linked Lists
*/

#include <stdio.h>

// class Node {
//     public:
//         int data;   //Data element or item
//         Node* next; // Next item in list
// };

struct Node
{
    int val;   // Data element or item
    Node* next; // Next item in the list
    Node(int x) : val(x), next(nullptr) {}
};

// Initiate a new list represented by head
class LinkedList {
    private:
        Node *head;
    public:
        // Initialize data structure
        LinkedList() {
            head = NULL;
        }
};


int main() {
    // Create three heaps
    return 0;
}