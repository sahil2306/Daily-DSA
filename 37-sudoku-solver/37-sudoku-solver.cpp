class Solution {
public:
    
    bool isSafe(vector<vector<char>>& board, int r, int c, char num){
        for(int i=0;i<9;i++){
            if(board[r][i]==num){
                return 0;
            }
        }
        
        for(int i=0;i<9;i++){
            if(board[i][c]==num){
                return 0;
            }
        }
        
        int rs = (r/3)*3;  
        int cs = (c/3)*3;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[rs+i][cs+j]==num){
                    return 0;
                }
            }
        }
        return 1;
    }

    bool sudokuSolver(vector<vector<char>>& board, vector<int> v, int idx){
        if(idx==v.size()){
            return 1;
        }
        
        int r = v[idx]/9;
        int c = v[idx]%9;

        for(char i='1'; i<='9'; i++){
            if(isSafe(board,r,c,i)){
                board[r][c]=i;
                
                if((sudokuSolver(board,v,idx+1))==1){
                    return 1;
                }
                
                board[r][c]='.';
            }
        }

        return 0;
    }

    
    void solveSudoku(vector<vector<char>>& board) {
        vector<int> v;
        int n=9;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    v.push_back(i*n+j);
                }
            }
        }

        sudokuSolver(board,v,0);    
    }
};