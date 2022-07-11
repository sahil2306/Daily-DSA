# Reaching the heights
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The teacher gives a mental ability question to Raju. The question is as follows:-</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Raju is in an elevator. Given by his teacher is an array of size N which denotes the number of floors and has a <lclighter data-id="lgt261752391" data-bundle-id="2" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto; background-color: initial;">1 based indexing</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="261752391" data-bundle-id="2" id="lgt261752391" style="background-image: url(&quot;https://profile.getliner.com/liner-service-bucket/user_photo_default/color-6/S.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div>. The elevator starts from the ground and moves <lclighter data-id="lgt261752359" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">up</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="261752359" data-bundle-id="0" id="lgt261752359" style="background-image: url(&quot;https://profile.getliner.com/liner-service-bucket/user_photo_default/color-6/S.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div> and down, <lclighter data-id="lgt261752363" data-bundle-id="1" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">X</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="261752363" data-bundle-id="1" id="lgt261752363" style="background-image: url(&quot;https://profile.getliner.com/liner-service-bucket/user_photo_default/color-6/S.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div> and Y floors respectively. There is a code used in the elevator according to which it moves up <lclighter data-id="lgt261752371" data-bundle-id="3" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto; background-color: initial;">X floors given at odd indexe</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="261752371" data-bundle-id="3" id="lgt261752371" style="background-image: url(&quot;https://profile.getliner.com/liner-service-bucket/user_photo_default/color-6/S.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div>s of the array and moves down Y floors given at even indexes of the array. He is asked to go to the highest floor possible. Help him to sort the array such that he reaches the highest floor after traversing the whole array from starting till the end, without skipping any index.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">He always prefers to move more number of floors up and less number of floors down. Once he gets into the elevator, the elevator should not reach the ground again, if it does print Not Possible.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {2, 3, 4, 5}
<strong style="user-select: auto;">Output :</strong> 5 2 4 3
<strong style="user-select: auto;">Explanation:</strong>
Array can be arranged as {5,3,4,2} or 
{4,3,5,2} or {4,2,5,3} but it will get 
arranged as {5,2,4,3} because he always 
prefer to move more number of floors up 
and less number of floors down.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {1, 1} <strong style="user-select: auto;">
Output :</strong>  Not Possible </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">game_with_number()</strong> that takes sizeOfArray <strong style="user-select: auto;">(n)</strong>, an array <strong style="user-select: auto;">(arr)</strong>, and return the sorted array or if it is Not Possible return <strong style="user-select: auto;">-1</strong>. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*LOG(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&nbsp;≤&nbsp;N ≤&nbsp;10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1&nbsp;≤ arr[i]&nbsp;≤&nbsp;10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>