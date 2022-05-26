# Gold Mine Problem
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><lkslighter data-id="lgt016873273801559563" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; background-color: initial; user-select: auto;">Given a gold mine called&nbsp;</lkslighter><strong style="user-select: auto;"><lkslighter data-id="lgt016873273801559563" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; background-color: initial; user-select: auto;">M</lkslighter></strong><lkslighter data-id="lgt016873273801559563" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; background-color: initial; user-select: auto;">&nbsp;of (</lkslighter><strong style="user-select: auto;"><lkslighter data-id="lgt016873273801559563" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; background-color: initial; user-select: auto;">n x&nbsp;m)</lkslighter></strong><lkslighter data-id="lgt016873273801559563" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; background-color: initial; user-select: auto;"> dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From&nbsp;a given cell, the miner can move</lkslighter><div class="LinerThreadIcon LksLighter" data-bundle-id="0" style="user-select: auto;">
      <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
    </div> </span></p>

<ol style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">to the cell diagonally up towards the right&nbsp;</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">to the right</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">to the cell&nbsp;diagonally down towards the right</span></li>
</ol>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Find out maximum amount of gold which he can collect.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, m = 3
M = {{1, 3, 3},
     {2, 1, 4},
     {0, 6, 4}};
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explaination:</strong> 
The path is {(1,0) -&gt; (2,1) -&gt; (2,2)}.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, m = 4
M = {{1, 3, 1, 5},
     {2, 2, 4, 1},
     {5, 0, 2, 3},
     {0, 6, 1, 2}};
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explaination:</strong> 
The path is {(2,0) -&gt; (3,1) -&gt; (2,2) 
-&gt; (2,3)} or {(2,0) -&gt; (1,1) -&gt; (1,2) 
-&gt; (0,3)}.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">maxGold()</strong> which takes the values n, m and the mine M as input parameters and returns the maximum amount of gold that can be collected.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n*m)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m ≤ 50<br style="user-select: auto;">
1 ≤ M[i][j] ≤ 100</span></p>
 <p style="user-select: auto;"></p>
            </div>