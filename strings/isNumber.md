65 A valid number can be split up into these components (in order):

A decimal number or an integer.
(Optional) An 'e' or 'E', followed by an integer.
A decimal number can be split up into these components (in order):

(Optional) A sign character (either '+' or '-').
One of the following formats:
One or more digits, followed by a dot '.'.
One or more digits, followed by a dot '.', followed by one or more digits.
A dot '.', followed by one or more digits.
An integer can be split up into these components (in order):

(Optional) A sign character (either '+' or '-').
One or more digits.
For example, all the following are valid numbers: ["2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"], while the following are not valid numbers: ["abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"].

Given a string s, return true if s is a valid number.

You're browsing through LeetCode's problems and notice a problem marked as hard with a 16% acceptance rate, the lowest you've ever seen. What could it be? 4D Dynamic Programming + binary search? An esoteric graph algorithm with a name you can't pronounce?

Actually, it's "determine if a string is a number". What gives? In my opinion, the reason this problem is so "difficult" isn't necessarily because it is super hard. I think it's just really hard to approach the problem in a way that covers all possible edge cases - something this problem definitely does not lack. Additionally, this is not your typical LeetCode problem, but a problem that is highly representative of a "real world" problem - a seemingly simple task that is frustratingly full of edge cases.

Don't feel discouraged if you're struggling with this problem. When we solve a lot of problems, we discover common patterns, algorithms, and neat tricks that stick with us. We can then apply this knowledge to solve similar problems in the future. The issue with this problem is that there isn't really any other problem on LeetCode that prepares you for it. The key to solving this problem is to carefully read the problem statement, think about edge cases, and keep your code simple.

Interview Tip: Asked a question like this in an interview? Be sure to communicate thoroughly with your interviewer to make sure you're covering all cases.

Approach 1: Follow The Rules!

Intuition

The problem statement outlines a very specific set of rules. Let's put all possible characters into groups, and then create a set of rules for each group. Then, we can iterate through the input and evaluate if the characters are following the rules or not.

What are all of the possible character groups, and what can we say about them? Reading through the problem statement very carefully, we can ascertain:

Digits (one of ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"])

Both decimal numbers and integers must contain at least one digit.
A sign ("+" or "-")

Sign characters are optional for both decimal numbers and integers, but if one is present, it will always be the first character. Note, this means that a sign character can also appear immediately after an exponent.
An exponent ("e" or "E")

Exponents are also optional, but if the string contains one then it must be after a decimal number or an integer.
An integer must follow the exponent.
A dot (".")

A decimal number should only contain one dot. Integers cannot contain dots.
Anything else

There will never be anything else in a valid number.
From these facts, we can logically determine a set of rules to follow in our algorithm.

Rules

Digits

First of all, there must always be at least one digit in the input for it to form a valid number. Let's use a variable seenDigit to indicate whether we have seen a digit yet.
Signs

If a sign is present, it must be the first character in a decimal number or integer. In a valid number, there are two possible locations for these signs - at the front of the number, or right after an exponent ("e" or "E") e.g., -63e+7. Therefore, if we see a sign, and it is not the first character of the input, and does not come immediately after an exponent ("e" or "E"), then we know the number is not valid.
Exponents ("e" or "E")

There cannot be more than one exponent in a valid number, so we will use a variable seenExponent to indicate whether we have already seen an exponent.
An exponent must appear after a decimal number or an integer. This means if we see an exponent, we must have already seen a digit.
Dots

There cannot be more than one dot in a valid number, since only integers are allowed after an exponent, so there cannot be more than one decimal number. We will use a variable seenDot to indicate whether we have seen a dot.
If we see a dot appear after an exponent, the number is not valid, because integers cannot have dots.
Anything else

Seeing anything else instantly invalidates the input.
Algorithm

Now that we have laid out the rules, let's iterate over the input. For each character, determine what group it belongs to, and verify that it follows the rules.

Declare 3 variables seenDigit, seenExponent, and seenDot. Set all of them to false.

Iterate over the input.

If the character is a digit, set seenDigit = true.

If the character is a sign, check if it is either the first character of the input, or if the character before it is an exponent. If not, return false.

If the character is an exponent, first check if we have already seen an exponent or if we have not yet seen a digit. If either is true, then return false. Otherwise, set seenExponent = true, and seenDigit = false. We need to reset seenDigit because after an exponent, we must construct a new integer.

If the character is a dot, first check if we have already seen either a dot or an exponent. If so, return false. Otherwise, set seenDot = true.

If the character is anything else, return false.

At the end, return seenDigit. This is one reason why we have to reset seenDigit after seeing an exponent - otherwise an input like "21e" would be incorrectly judged as valid.

11/23/2021 11:21