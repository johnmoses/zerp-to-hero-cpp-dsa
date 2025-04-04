Subarrays of circular arrays can be classified as either as one-interval subarrays, or two-interval subarrays.

Using Kadane's algorithm kadane for finding the maximum sum of non-empty subarrays, the answer for one-interval subarrays is kadane(A).

Now, let 
N
=
A
.length
N=A.length. For a two-interval subarray like:

(
A
0
+
A
1
+
⋯
+
A
i
)
+
(
A
j
+
A
j
+
1
+
⋯
+
A
N
−
1
)
(A 
0
​	
 +A 
1
​	
 +⋯+A 
i
​	
 )+(A 
j
​	
 +A 
j+1
​	
 +⋯+A 
N−1
​	
 )

we can write this as

(
∑
k
=
0
N
−
1
A
k
)
−
(
A
i
+
1
+
A
i
+
2
+
⋯
+
A
j
−
1
)
(∑ 
k=0
N−1
​	
 A 
k
​	
 )−(A 
i+1
​	
 +A 
i+2
​	
 +⋯+A 
j−1
​	
 )

For two-interval subarrays, let 
B
B be the array 
A
A with each element multiplied by 
−
1
−1. Then the answer for two-interval subarrays is 
sum
(
A
)
+
kadane
(
B
)
sum(A)+kadane(B).

Except, this isn't quite true, as if the subarray of 
B
B we choose is the entire array, the resulting two interval subarray 
[
0
,
i
]
+
[
j
,
N
−
1
]
[0,i]+[j,N−1] would be empty.

We can remedy this problem by doing Kadane twice: once on 
B
B with the first element removed, and once on 
B
B with the last element removed.

11/22/2021 13:44