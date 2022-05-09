# Probability of Knight
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an NxN chessboard and a Knight at position (x, y). The Knight has to take exactly K steps, where at each step it chooses any of the 8 directions uniformly at random. Find&nbsp;the probability that the Knight remains in the chessboard after taking K steps, with the condition that it cant enter the board again once it leaves it.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : </strong>N = 8, x = 0, y = 0, K = 3
<strong style="user-select: auto;">Output: </strong>0.125000</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 4, x = 1, y = 2, k = 4
<strong style="user-select: auto;">Output: </strong>0.024414</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findProb()&nbsp;</strong>which takes N, x, y and K as input parameter and returns the probability.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity :&nbsp;</strong>O(N <sup style="user-select: auto;">3</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(N<sup style="user-select: auto;">3</sup>)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100<br style="user-select: auto;">
0 &lt;= x, y &lt;= N</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">0 &lt;= K &lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>