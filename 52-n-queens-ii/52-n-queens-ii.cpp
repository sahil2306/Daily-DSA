class Solution {
public:
    
    bool isValid(int &r, int &c, int &n, vector<vector<int>> &board){
        
        vector<vector<int>> dir = { { 0, -1 }, { -1, -1 }, { -1, 0 }, { -1, 1 }, { 0, 1 }, { 1, 1 }, { 1, 0 }, { 1, -1 } };
        for (int d = 0; d < dir.size(); d++) {
            for (int rad = 1; rad <= n; rad++) {
                int x = r + rad * dir[d][0];
                int y = c + rad * dir[d][1];

                if (x >= 0 && y >= 0 && x < n && y < n) {
                    if (board[x][y])
                        return false;
                } else
                    break;
            }
        }
        return true;
    }
    
    int backtrack(int &n,int r,vector<vector<int>> board){
        if(r==n){
            return 1;
        }
        int count=0;
        for(int c=0;c<n;c++){
            if(board[r][c]==0){
                if(isValid(r,c,n,board)){
                    board[r][c]=1;
                    count+=backtrack(n,r+1,board);
                    board[r][c]=0;
                }
            }
        }
        return count;
    }
    
    int totalNQueens(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));
        return backtrack(n,0,board);
        
    }
};