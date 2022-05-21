# Farthest number
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A</strong><strong style="user-select: auto;">rr[]</strong>&nbsp;of size&nbsp;<strong style="user-select: auto;">N</strong>. For every element in the array, the task is to find the index of the farthest element in the array to the right which is smaller than the current element. If no such number exists then print&nbsp;<strong style="user-select: auto;">-1</strong>.</span><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: </span></strong><span style="font-size: 18px; user-select: auto;">0 based indexing.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
<span style="font-size: 18px; user-select: auto;">N=5</span>
<span style="font-size: 18px; user-select: auto;">Arr[] = {3, 1, 5, 2, 4}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">3 -1 4 -1 -1</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">Arr[3] is the farthest smallest element
to the right of Arr[0].
Arr[4] is the farthest smallest element
to the right of Arr[2].
And for the rest of the elements, there is
no smaller element to their right.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
<span style="font-size: 18px; user-select: auto;">N=5</span>
<span style="font-size: 18px; user-select: auto;">Arr[] = {1, 2, 3, 4, 0}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">4 4 4 4 -1</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function<strong style="user-select: auto;"> farNumber()</strong>&nbsp;which takes the N&nbsp;(number of elements in Array Arr) ,Arr[], and returns the array&nbsp;of farthest element to the right for&nbsp;every&nbsp;element of the array.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 </span> <span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">N</span> <span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">1e5<br style="user-select: auto;">
0</span> <span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">Arr[i]</span>&nbsp;<span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">1e9&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>