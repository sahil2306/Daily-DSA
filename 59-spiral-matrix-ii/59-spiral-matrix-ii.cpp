class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n));
        
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        
        int c=1,no=0;
        while(r1<=r2 and c1<=c2){
            
                for(int j=c1;j<=c2;j++){
                    ans[r1][j]=++no;
                }
                for(int i=r1+1;i<=r2;i++){
                    ans[i][c2]=++no;
                }
                
            if(r1<r2 and c1<c2){
                for(int j=c2-1;j>c1;j--){
                    ans[r2][j]=++no;
                }
                for(int i=r2;i>r1;i--){
                    ans[i][c1]=++no;
                }
            }
            
                r1++;r2--;
                c1++;c2--;
        }
        
        
        return ans;
    }
};