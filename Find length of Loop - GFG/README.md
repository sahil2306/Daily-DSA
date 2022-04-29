# Find length of Loop
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a linked list of size <strong style="user-select: auto;">N</strong>. The task is to complete the function&nbsp;<strong style="user-select: auto;">countNodesinLoop()&nbsp;</strong>that checks whether a given Linked List contains a&nbsp;<strong style="user-select: auto;">loop or not&nbsp;</strong>and if the&nbsp;<strong style="user-select: auto;">loop </strong>is present then<strong style="user-select: auto;"> return the count of nodes</strong> in a loop or else <strong style="user-select: auto;">return 0. C&nbsp;</strong>is the position of the node to which the last node is connected. If it is 0 then no loop.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/linkedlist.png" style="height: 236px; width: 512px; user-select: auto;" class="img-responsive"> </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 10
value[]={25,14,19,33,10,21,39,90,58,45}
C = 4
<strong style="user-select: auto;">Output: </strong>7<strong style="user-select: auto;">
Explanation: </strong>The loop is 45-&gt;33. So
length of loop is 33-&gt;<em style="user-select: auto;">10</em>-&gt;21-&gt;39-&gt;
90-&gt;58-&gt;<em style="user-select: auto;">45</em> = <strong style="user-select: auto;">7. </strong>The number 33&nbsp;is
connected to the last node to form the
loop because according to the input the
4<sup style="user-select: auto;">th</sup> node from the beginning(1&nbsp;based
index) will be connected to the last
node for the loop.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
value[] = {1,0}
C = 1
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>The length of the loop
is 2.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">countNodesinLoop</strong>() which contains the only argument as reference to head of<strong style="user-select: auto;"> linked list&nbsp;</strong>and return the lenght of the loop ( 0 if there is no loop).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
<lclighter data-id="lgt255787205" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; --darkreader-inline-bgimage:linear-gradient(rgba(0, 0, 0, 0) 0%, transparent calc(50% - 4px), #124746 calc, 50% - 4px, #124746 100%); user-select: auto;" data-darkreader-inline-bgimage="">1 &lt;= N &lt;= 500</lclighter><br style="user-select: auto;"><lclighter data-id="lgt255787205" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; --darkreader-inline-bgimage:linear-gradient(rgba(0, 0, 0, 0) 0%, transparent calc(50% - 4px), #124746 calc, 50% - 4px, #124746 100%); user-select: auto;" data-darkreader-inline-bgimage=""><br style="user-select: auto;">0 &lt;= C &lt;= N-1</lclighter><div class="LinerThreadIcon LinerFirst" data-highlight-id="255787205" data-bundle-id="0" id="lgt255787205" style="background-image: url(&quot;https://profile.getliner.com/liner-service-bucket/user_photo_default/color-4/T.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div></span></p>
 <p style="user-select: auto;"></p>
            </div>