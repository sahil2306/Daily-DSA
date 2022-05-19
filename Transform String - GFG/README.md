# Transform String
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
A = "abd"
B = "bad"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>The conversion can take place in
1 operation: Pick 'b' and place it at the front.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
A = "GeeksForGeeks"
B = "ForGeeksGeeks"
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation:</strong> The conversion can take
place in 3 operations:
Pick 'r' and place it at the front.
A = "rGeeksFoGeeks"
Pick 'o' and place it at the front.
A = "orGeeksFGeeks"
Pick 'F' and place it at the front.
A = "ForGeeksGeeks"</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp; </strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function<strong style="user-select: auto;"> transform()</strong> which takes two strings A and B as input parameters and returns the minimum number of steps required to transform A into B. If transformation is not possible return -1.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N) where N is max(length of A,&nbsp;length of B)&nbsp;<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(1) &nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;= A.length(), B.length()&nbsp;&lt;= 10<sup style="user-select: auto;">4</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>