# Partition a number into two divisible parts
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a number (as string) and two integers a and b, divide the string in two non-empty parts such that the first part is divisible by a and the second part is divisible by b. In case multiple answers exist, return the string such that the first non-empty part has minimum length.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
1200 4 3
<strong style="user-select: auto;">Output:</strong>
12 00
<strong style="user-select: auto;">Explanation:</strong>
12 is divisible by 4, and
00 is divisible by 3.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
<span style="font-size: 18px; user-select: auto;">125 12 5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">12 5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong> </span>
<span style="font-size: 18px; user-select: auto;">12 is divisible by 12, and </span>
<span style="font-size: 18px; user-select: auto;">5 is divisible by 5.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function stringPartition() which takes the string S and returns a string which will be in the form of&nbsp;</span><span style="font-size: 18px; user-select: auto;">first sub-string + " " (Single Space) + second sub-string</span><span style="font-size: 18px; user-select: auto;">. </span><span style="font-size: 18px; user-select: auto;">If not found return -1 as a string.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Expected Time Complexity: O(N)<br style="user-select: auto;">
Expected Auxiliary Space: O(N)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&lt;=N&lt;=10<sup style="user-select: auto;">6</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&lt;=a,b&lt;=N</span></p>
 <p style="user-select: auto;"></p>
            </div>