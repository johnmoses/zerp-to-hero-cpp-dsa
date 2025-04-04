Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Input: s = "abc", t = "ahbgdc"
Output: true
Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.

Overview

First of all, one might be deceived by the Easy tag of the problem. The solution might be simple (i.e. judging by the number of code lines), yet the problem itself is much more intriguing, especially when one is asked to prove the correctness of the solution, not to mention that we have an interesting and legitimate follow-up question.

Also, one might be puzzled with the hints from the problem description, which says "Binary Search", "Dynamic Programing" and "Greedy". There is no doubt that each of them does characterize some trait of the solutions, although the order of these keywords might be misleading. Arguably, the keyword Greedy is more important than the other two.

One will see in the following sections, how each of the above techniques plays out in the solutions. We will also cover the follow-up question in one of the solutions.

Solution

Overview

This is a nice problem, as unlike some interview questions, this one is a real-world problem! Finding the longest common subsequence between two strings is useful for checking the difference between two files (diffing). Git needs to do this when merging branches. It's also used in genetic analysis (combined with other algorithms) as a measure of similarity between two genetic codes.

For that reason, the examples used in this article will be strings consisting of the letters a, c, g, and t. You might remember these letters from high school biology—they are the symbols we use to represent genetic codes. By using just four letters in examples, it is easier for us to construct interesting examples to discuss here. You don't need to know anything about genetics or biology for this though, so don't worry.

Before we look at approaches that do work, we'll have a quick look at some that do not. This is because we're going to pretend that you've just encountered this problem in an interview, and have never seen it before, and have not been told that it is a "dynamic programming problem". After all, in this interview scenario, most people won't realize immediately that this is a dynamic programming problem. Being able to approach and explore problems with an open mind without jumping to early conclusions is essential in tackling problems you haven't seen before.

