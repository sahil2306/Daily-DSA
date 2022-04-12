class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<int>> ans = board;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int l=0;
                
                l+= ((i-1)>=0) and (board[i-1][j]==1)?1:0;
                l+= ((i+1)<m) and (board[i+1][j]==1)?1:0;
                l+= ((j-1)>=0) and (board[i][j-1]==1)?1:0;
                l+= ((j+1)<n) and (board[i][j+1]==1)?1:0;
                
                l+= ((i-1)>=0) and ((j-1)>=0) and (board[i-1][j-1]==1)?1:0;
                l+= ((i+1)<m) and ((j-1)>=0) and (board[i+1][j-1]==1)?1:0;
                l+= ((i+1)<m) and ((j+1)<n) and (board[i+1][j+1]==1)?1:0;
                l+= ((i-1)>=0) and ((j+1)<n) and (board[i-1][j+1]==1)?1:0;
                
                if(board[i][j]==1){
                    if(l<2 or l>3)ans[i][j]=0;
                }
                else{
                    ans[i][j] = (l==3)?1:0;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j] = ans[i][j];
            }
        }
    }
};