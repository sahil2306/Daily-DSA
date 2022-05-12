// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    
    void dfs(int i,int j, int r, int c, vector<vector<bool>> &vis, vector<vector<int>> &grid){
        if( i>=r || i<0 || j>=c || j<0 || grid[i][j]==0 || vis[i][j]==true){
            return;
        }
        
        vis[i][j]=1;
        
        dfs(i+1,j,r,c,vis,grid);    //right
        dfs(i-1,j,r,c,vis,grid);    //left
        dfs(i,j-1,r,c,vis,grid);    //up
        dfs(i,j+1,r,c,vis,grid);    //down
    }
    
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int r = grid.size();
        int c = grid[0].size();
        
        vector <vector <bool>> vis(r,vector <bool>(c,false));
        int sx=-1,sy=-1,dx,dy;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    sx=i;sy=j;
                }
                else if(grid[i][j]==2){
                    dx=i;dy=j;
                }
            }
        }
        
        if(sx==-1 || sy==-1){
            return false;
        }
        
        dfs(sx,sy,r,c,vis,grid);
        
        return vis[dx][dy];
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends