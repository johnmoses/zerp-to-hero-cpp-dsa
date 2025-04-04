Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Approach 1: Straight-Forward Approach

Algorithm

This is a simple problem that merely tests your ability to manipulate list node pointers. Because the input list is sorted, we can determine if a node is a duplicate by comparing its value to the node after it in the list. If it is a duplicate, we change the next pointer of the current node so that it skips the next node and points directly to the one after the next node.


Complexity Analysis

Time complexity : 
O
(
n
)
O(n). Because each node in the list is checked exactly once to determine if it is a duplicate or not, the total run time is 
O
(
n
)
O(n), where 
n
n is the number of nodes in the list.

Space complexity : 
O
(
1
)
O(1). No additional space is used.

11/24/2021 11:18