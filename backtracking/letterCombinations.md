Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Solution

Overview

One of the first things you should always do is look at the constraints. Quite often, you can figure out what sort of approach needs to be taken simply from looking at the input size. In an interview, asking your interviewer about the constraints will also show your attention to detail - on top of giving you information.

In this particular problem, the length of the input is extremely small, 0 <= digits.length <= 4. With such small input sizes, we can safely assume that a brute force solution in which we generate all combinations of letters will be accepted.

Whenever you have a problem where you need to generate all combinations/permutations of some group of letters/numbers, the first thought you should have is backtracking. If you're new to backtracking, check out our backtracking explore card. Backtracking algorithms can often keep the space complexity linear with the input size.