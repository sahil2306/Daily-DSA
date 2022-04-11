# Geek in a Maze
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Geek is in a maze of size N * M. Each cell in the maze is made of either '.' or '#'. An empty cell is represented by '.' and an obstacle is represented by '#'. If Geek starts at cell (R, C), find how many different empty cells&nbsp;he can pass through while avoiding the obstacles. He can move in any of the four directions but he can move up at most U times and he can move down atmost D times. </span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
N = 3, M = 3
R = 1, C = 0
U = 1, D = 1
mat = {{'.', '.', '.'},
       {'.', '#', '.'},
       {'#', '.', '.'}}
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Geek can reach 
(1, 0), (0, 0), (0, 1), (0, 2), (1, 2) 

</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
N = 3, M = 4
R = 1, C = 0
U = 1, D = 2 
mat = {{'.', '.', '.'}, 
       {'.', '#', '.'}, 
       {'.', '.', '.'},
       {'#', '.', '.'}} 
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> Geek can reach all the 
cells except for the obstacles.
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task: &nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">numberOfCells()&nbsp;</strong>which takes&nbsp;<strong style="user-select: auto;">N, M, R, C, U, D</strong> and the&nbsp;two dimensional character array&nbsp;<strong style="user-select: auto;">mat[][]</strong> as input parameters and returns the number of cells geek can visit( If he is standing on obstacle he can not move). </span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N*M ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
mat[i][j] = '#" or '.'<br style="user-select: auto;">
0 ≤ R ≤ N-1<br style="user-select: auto;">
0 ≤ C ≤ M-1</span></p>
 <p style="user-select: auto;"></p>
            </div>