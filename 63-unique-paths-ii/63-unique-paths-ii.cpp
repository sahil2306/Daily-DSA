class Solution {
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int sr=0,sc=0,er=grid.size()-1,ec=grid[0].size()-1;
        vector<vector<long long int>> dp(er+1,vector<long long int>(ec+1,0));
        
        if(grid[0][0]==1){
            return 0;
        }
        
        vector<pair<int,int>> dir;
        dir.push_back({1,0});
        dir.push_back({0,1});
        
        for(int i=er;i>=sr;i--){
            for(int j=ec;j>=sc;j--){
                if((i==er) and (j==ec)){
                    dp[i][j]=1;
                    continue;
                }
                long long int count=0;
                for(auto d:dir){
                    int r=i+d.first;
                    int c=j+d.second;

                    if(r>=0 and c>=0 and r<=er and c <=ec and grid[r][c]!=1){
                        count+=dp[r][c];
                    }
                }
                dp[i][j]=count;
            }
        }
        return dp[sr][sc];
    }
};