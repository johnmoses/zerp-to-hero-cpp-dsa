Approach 1: Categorize by Sorted String

Intuition

Two strings are anagrams if and only if their sorted strings are equal.

Algorithm

Maintain a map ans : {String -> List} where each key 
K
K is a sorted string, and each value is the list of strings from the initial input that when sorted, are equal to 
K
K.

In Java, we will store the key as a string, eg. code. In Python, we will store the key as a hashable tuple, eg. ('c', 'o', 'd', 'e').