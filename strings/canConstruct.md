383 Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

Approach 1: Simulation

Intuition

To create our ransom note, for every character we have in the note, we need to take a copy of that character out of the magazine so that it can go into the note.

If a character we need isn't in the magazine, then we should stop and return False. Otherwise, if we manage to get all the characters we need to complete the note, then we should return True.

For each char in ransomNote:
    Find that letter in magazine.
    If it is in magazine:
        Remove it from magazine.
    Else:
        Return False
Return True
Note that there's no need to explicitly build up the ransom note; we only need to return whether or not it's possible. This can be determined simply by removing the characters we need from the magazine.

This is the most straightforward approach, but as we'll see soon, although it does pass here on Leetcode, it's not very efficient and is not likely to get you a job at a top company.

Algorithm

Strings are an immutable type. This means that they can't be modified, and so don't have "insert" and "delete" operations. For this reason, we instead need to repeatedly replace the magazine with a new String, that doesn't have the character we wanted to remove.

Approach 2: Two HashMaps

Intuition

Remember that we decided the length of the ransom note is n, and the length of the magazine ism.

In an interview, you might start by describing the previous approach and determining its time complexity, but not actually implementing it. Your next goal would be to reason carefully about the implementation and its time complexity, to identify parts that could be made more efficient.

Removing the 
n
n factor from the time complexity is going to be impossible, because we need to at least look at each character in the ransom note. Otherwise, how could we possibly know whether or not we have the characters we need to make it? We might be able to avoid the need for an O(m) operation for every one of the n characters in the ransom note though.

As an example, notice that if there's three 'a''s in the ransom note, then there needs to be at least three 'a's in the magazine. This should be fairly intuitive, as you'd encounter it if trying to make a note out of a magazine for real. The same idea applies for all the other unique characters too.

Therefore, a better way of solving the problem would be to count up how many of each letter are in both the magazine and the ransom note. We can represent the counts with a HashMap that has characters as keys, and counts as values. For example, the string "leetcode is cool" is represented as follows.

The counts

We can make two HashMaps; one for the magazine, and the other for the ransom note. Here is the pseudocode for making one of these "counts" HashMaps.

```py
define function makeCountsMap(string):
    counts = a new HashMap
    for each char in string:
        if char not in counts:
            counts.put(char, 1)
        else:
            old_count = counts.get(char)
            counts.put(char, old_count + 1)
    return counts
    ```

11/22/2021 11:20