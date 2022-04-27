# Killing Spree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are Infinite People Standing in a row, indexed from 1.<br style="user-select: auto;">
A person having index 'i' has&nbsp;strength of (i*i).<br style="user-select: auto;">
You have Strength 'P'. You need to tell what is the maximum number of People You can Kill With your Strength P.<br style="user-select: auto;">
You can only Kill a person with strength 'X' if P &gt;= 'X' &nbsp;and after killing him, Your Strength decreases by 'X'.&nbsp;</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 14
<strong style="user-select: auto;">Output:</strong>&nbsp;3
<strong style="user-select: auto;">Explanation</strong>:</span>
<span style="font-size: 18px; user-select: auto;">The strengths of people is 1, 4, 9, 16, .... 
and so on. WE can kill the first 3 person , 
after which our Power becomes 0 and we cant 
kill anyone else. So answer is 3</span><span style="font-size: 18px; user-select: auto;">
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 10
<strong style="user-select: auto;">Output: </strong>2
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">killinSpree()</strong>&nbsp;which takes the integer N as input parameters and returns the maximum Number of People You can kill.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(log(n))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ T ≤ 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">12</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>