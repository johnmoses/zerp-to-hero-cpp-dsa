You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

Approach 1: Breadth-First Search (BFS)

Intuition

This is yet another 2D traversal problem. As we know, the common algorithmic strategies to deal with these problems would be Breadth-First Search (BFS) and Depth-First Search (DFS).

As suggested by its name, the BFS strategy prioritizes the breadth over depth, i.e. it goes wider before it goes deeper. On the other hand, the DFS strategy prioritizes the depth over breadth.

The choice of strategy depends on the nature of the problem. Though sometimes, they are both applicable for the same problem. In addition to 2D grids, these two algorithms are often applied to problems associated with tree or graph data structures as well.

In this problem, one can see that BFS would be a better fit.

Because the process of rotting could be explained perfectly with the BFS procedure, i.e. the rotten oranges will contaminate their neighbors first, before the contamination propagates to other fresh oranges that are farther away.
If one is not familiar with the algorithm of BFS, one can refer to our Explore card of Queue & Stack which covers this subject.

However, it would be more intuitive to visualize the rotting process with a graph data structure, where each node represents a cell and the edge between two nodes indicates that the given two cells are adjacent to each other.