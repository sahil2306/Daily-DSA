# Permutation with Spaces
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. The output should be printed in <strong style="user-select: auto;">sorted</strong> <strong style="user-select: auto;">increasing</strong> order of strings</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
S = "ABC"
<strong style="user-select: auto;">Output: </strong>(A B C)(A BC)(AB C)(ABC)
<strong style="user-select: auto;">Explanation</strong>:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = "AB"
<strong style="user-select: auto;">Output: </strong>(A B)(AB)
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">permutation()</strong>&nbsp;which takes the string S as input parameters and returns the <strong style="user-select: auto;">sorted array&nbsp;</strong>of the string denoting the different permutation <strong style="user-select: auto;">(DON'T ADD '(' and ')' it will be handled by the driver code only)</strong>.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(2^n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">CONSTRAINTS:</strong><br style="user-select: auto;">
1 &lt; |S| &lt; 10<br style="user-select: auto;">
S only contains <strong style="user-select: auto;">lowercase and Uppercase English</strong> letters.</span></p>
 <p style="user-select: auto;"></p>
            </div>