# Subsets with XOR value
##  Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given an array arr&nbsp;of N integers&nbsp;and an integer&nbsp;K, find the number of subsets of arr having XOR of elements as K.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4
k = 6
arr: 6 9 4 2</span><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Output:</strong>
2
<strong style="user-select: auto;">Explanation:</strong>
The subsets are 
{4,2} and {6}</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5
K = 4
arr: </span><span style="font-size: 18px; user-select: auto;">1 2 3 4 5
<strong style="user-select: auto;">Output:</strong>
4
<strong style="user-select: auto;">Explanation:</strong>
The subsets are {1, 5},
{4}, {1, 2, 3, 4},
and {2, 3, 5}</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">subsetXORâ€‹()</strong>&nbsp;which takes the array arr[], its size N and an integer K as input parameters&nbsp;and returns the number of subsets having xor as K</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N*M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity: </strong>O(N*M)<br style="user-select: auto;">
Note: M = maximum value any XOR subset will acquire</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=N&lt;=20<br style="user-select: auto;">
1&lt;=K&lt;=100<br style="user-select: auto;">
0&lt;=arr[i]&lt;=100</span></p>
 <p style="user-select: auto;"></p>
            </div>