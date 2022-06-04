class Solution {
public:
    
    bool isValid(int r, int c, int n, vector<string>& sol){
        for(int i=0;i<r;i++){
            if(sol[i][c]=='Q'){
                return false;
            }
        }
        
        //Right Diagonal
        for(int i=r,j=c;i>=0&&j<sol.size();--i,++j){
            if(sol[i][j]=='Q'){
                return 0;
            }
        }
        //left Diagoal
        for(int i=r,j=c; j>=0&&i>=0; --i,--j){
            if(sol[i][j]=='Q'){
                return 0;
            }
        }
        
        return true;
    }
    
    void backtrack(int r, int n, vector<string> curr, vector<vector<string>> &ans){
        if(r==n){
            ans.push_back(curr);
            return;
        } 
        
        for(int c=0;c<n;c++){
            if(curr[r][c]=='.'){
                if(isValid(r,c,n,curr)){
                    curr[r][c] = 'Q';
                    backtrack(r+1,n,curr,ans);
                    curr[r][c]='.';
                }
            } 
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        
        string s = "";
        vector<string> curr(n, string(n,'.'));
        
        backtrack(0,n,curr,ans);
        
        return ans;
    }
};