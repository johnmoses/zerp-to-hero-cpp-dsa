Given an n-ary tree, return the level order traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).

Approach 1: Simplified Breadth-first Search

Intuition

A variant of the above approach is to make a new list on each iteration instead of using a single queue. This makes the code slightly simpler because we lose the size variable and the counting loop, which are a potential source of off-by-one errors.