Approach 2: Iterative Approach

The iterative approach might be a little bit less intuitive. Let's try to understand it. We use an array for DP to store the results for subproblems. A cell with index i of the dp array is used to store the number of decode ways for substring of s from index 0 to index i-1.

We initialize the starting two indices of the dp array. It's similar to relay race where the first runner is given a baton to be passed to the subsequent runners. The first two indices of the dp array hold a baton. As we iterate the dp array from left to right this baton which signifies the number of ways of decoding is passed to the next index or not depending on whether the decode is possible.

dp[i] can get the baton from two other previous indices, either i-1 or i-2. Two previous indices are involved since both single and two digit decodes are possible.

Unlike the relay race we don't get only one baton in the end. The batons add up as we pass on. If someone has one baton, they can provide a copy of it to everyone who comes to them with a success. Thus, leading to number of ways of reaching the end.