Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement the MyLinkedList class:

MyLinkedList() Initializes the MyLinkedList object.
int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
void addAtTail(int val) Append a node of value val as the last element of the linked list.
void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.

Input
["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
[[], [1], [3], [1, 2], [1], [1], [1]]
Output
[null, null, null, null, 2, null, 3]

Constraints:

0 <= index, val <= 1000
Please do not use the built-in LinkedList library.
At most 2000 calls will be made to get, addAtHead, addAtTail, addAtIndex and deleteAtIndex.

Solution

Interview Strategy

Linked List is a data structure with zero or several elements. Each element contains a value and link(s) to the other element(s). Depending on the number of links, that could be singly linked list, doubly linked list and multiply linked list.

Singly linked list is the simplest one, it provides addAtHead in a constant time, and addAtTail in a linear time. Though doubly linked list is the most used one, because it provides both addAtHead and addAtTail in a constant time, and optimises the insert and delete operations.

Doubly linked list is implemented in Java as LinkedList. Since these structures are quite well-known, a good interview strategy would be to mention them during the discussion but not to base the code on them. Better to use the limited interview time to work with two ideas:

Sentinel nodes
Sentinel nodes are widely used in the trees and linked lists as pseudo-heads, pseudo-tails, etc. They serve as the guardians, as the name suggests, and usually they do not hold any data.
Sentinels nodes will be used here to simplify insert and delete. We would apply this in both of the following approaches.

Bidirectional search for doubly-linked list
Rather than starting from the head, we could search the node in a doubly-linked list from both head and tail.

If you are familiar with the concepts, you can start directly from the Approach #2. By the way, the Approach #2 is 90% of what you need to solve the problem of LRU Cache.

Approach 1: Singly Linked List

Let's start from the simplest possible MyLinkedList, which contains just a structure size and a sentinel head.

Note, that sentinel node is used as a pseudo-head and is always present. This way the structure could never be empty, it will contain at least a sentinel head. All nodes in MyLinkedList have a type ListNode: value + link to the next element.

Add at Index, Add at Head and Add at Tail

Let's first discuss insert at index operation, because thanks to the sentinel node addAtTail and addAtHead operations could be reduced to this operation as well.

The idea is straightforward:

Find the predecessor of the node to insert. If the node is to be inserted at head, its predecessor is a sentinel head. If the node is to be inserted at tail, its predecessor is the last node.

Insert the node by changing the link to the next node.

Delete at Index

Basically, the same as insert:

Find the predecessor.

Delete node by changing the links to the next node.

Get

Get is a very straightforward: start from the sentinel node and do index + 1 steps

Complexity Analysis

Time complexity: O(1) for addAtHead. O(k) for get, addAtIndex, and deleteAtIndex, where k is an index of the element to get, add or delete. O(N) for addAtTail.

Space complexity: O(1) for all operations. 

