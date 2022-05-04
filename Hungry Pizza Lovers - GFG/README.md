# Hungry Pizza Lovers
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Dominos Pizza has&nbsp;hungry customers waiting in the queue. Each unique order&nbsp;is placed by a customer at time&nbsp;x[i], and the order takes&nbsp;y[i]&nbsp;units of time to complete.<br style="user-select: auto;">
You have information on all&nbsp;n&nbsp;orders, Find the order in which all&nbsp;customers will receive their pizza and return it. If two or more orders are completed at the same time&nbsp;then sort them by non-decreasing order number.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {{4,1}, {6,2}, {7,6}, 
                       {8,1}, {1,3}}
<strong style="user-select: auto;">Output :</strong> 5 1 2 4 3
<strong style="user-select: auto;">Explanation:</strong>
Here an array can be transform to 
{5, 8, 13, 9, 4}. Here 5<sup style="user-select: auto;">th</sup>&nbsp;index order 
received first then 1<sup style="user-select: auto;">st</sup>&nbsp;order, 2<sup style="user-select: auto;">nd</sup>&nbsp;order...
return {5, 1, 2, 4, 3}
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {{1,1}, {1,1}, {1,1}} <strong style="user-select: auto;">
Output :</strong>  1 2 3 </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">permute()</strong> that takes 2-d array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>, and return the array of order in which customers will receive their pizza. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*LOG(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ arr[i][0], arr[i][1] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>