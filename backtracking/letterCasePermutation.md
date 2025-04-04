Approach #1: Recursion [Accepted]

Intuition

Maintain the correct answer as we increase the size of the prefix of S we are considering.

For example, when S = "abc", maintain ans = [""], and update it to ans = ["a", "A"], ans = ["ab", "Ab", "aB", "AB"], ans = ["abc", "Abc", "aBc", "ABc", "abC", "AbC", "aBC", "ABC"] as we consider the letters "a", "b", "c".

Algorithm

If the next character c is a letter, then we will duplicate all words in our current answer, and add lowercase(c) to every word in the first half, and uppercase(c) to every word in the second half.

If instead c is a digit, we'll add it to every word.