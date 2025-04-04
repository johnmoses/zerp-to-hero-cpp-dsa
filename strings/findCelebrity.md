Suppose you are at a party with n people (labeled from 0 to n - 1), and among them, there may exist one celebrity. The definition of a celebrity is that all the other n - 1 people know him/her, but he/she does not know any of them.

Now you want to find out who the celebrity is or verify that there is not one. The only thing you are allowed to do is to ask questions like: "Hi, A. Do you know B?" to get information about whether A knows B. You need to find out the celebrity (or verify there is not one) by asking as few questions as possible (in the asymptotic sense).

You are given a helper function bool knows(a, b) which tells you whether A knows B. Implement a function int findCelebrity(n). There will be exactly one celebrity if he/she is in the party. Return the celebrity's label if there is a celebrity in the party. If there is no celebrity, return -1.

Approach 1: Brute Force

Intuition

As per the problem statement, for a given person i, we can check whether or not i is a celebrity by using the knows(...) API to see if everybody knows i, and that i know nobody.

Therefore, the simplest way of solving this problem is to go through each of the people in turn, and check whether or not they are a celebrity.

Algorithm

It's best to define a separate isCelebrity(...) function that takes the id number of a specific person and returns true if they are a celebrity and false if not. This avoids the need for complex loop-break conditions, thus keeping the code cleaner.

One edge case we need to be cautious of is not asking person i if they know themselves. This can be handled by a check for i == j at the start of the main loop of isCelebrity(...) and then simply continue-ing when it is true.

Accepted
