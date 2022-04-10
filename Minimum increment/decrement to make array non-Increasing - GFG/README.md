# Minimum increment/decrement to make array non-Increasing
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: This&nbsp;<a href="http://practice.geeksforgeeks.org/problem-of-the-day" target="_blank" style="user-select: auto;">POTD</a>&nbsp;is a part of&nbsp;<a href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=potd&amp;utm_medium=problempage&amp;utm_campaign=gsc22" target="_blank" style="user-select: auto;">Geek Summer Carnival</a>. Solve all POTD consecutively from 5th to 10th April and get a chance to win exclusive discount vouchers on our GfG courses.</strong></span></p>

<hr style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">a</strong> of length <strong style="user-select: auto;">n</strong>, find the <strong style="user-select: auto;">minimum</strong> number of operations required to make it <strong style="user-select: auto;">non-increasing</strong>.&nbsp;You can select any one of the following operations and preform it any number of times on an array element.</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">increment the array element by 1.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">decrement the array element by 1.&nbsp;</span></li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">N = 4 
array = {3, 1, 2, 1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: </strong>
Decrement array[2] by 1. 
New array becomes {3,1,1,1} which is non-increasing. 
Therefore, only 1 step is required. </span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">N = 4 
array = {3, 1, 5, 1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 4</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">minOperations()</strong> that takes <strong style="user-select: auto;">n</strong>&nbsp;and array <strong style="user-select: auto;">a</strong> as input parameters and returns the <strong style="user-select: auto;">minimum </strong>number of operations required.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity:</strong> O(nlogn)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected space complexity:</strong> O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n&nbsp;&lt;= 10^4<br style="user-select: auto;">
1 &lt;= a[i] &lt;= 10^4</span></p>
 <p style="user-select: auto;"></p>
            </div>