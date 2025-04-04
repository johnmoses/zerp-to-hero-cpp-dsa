Approach 1: Backtracking

Algorithm

Backtracking is an algorithm for finding all solutions by exploring all potential candidates. If the solution candidate turns to be not a solution (or at least not the last one), backtracking algorithm discards it by making some changes on the previous step, i.e. backtracks and then try again.

Here is a backtrack function which takes a first integer to add and a current combination as arguments backtrack(first, curr).

If the current combination is done - add it to output.

Iterate over the integers from first to n.

Add integer i into the current combination curr.

Proceed to add more integers into the combination : backtrack(i + 1, curr).

Backtrack by removing i from curr.