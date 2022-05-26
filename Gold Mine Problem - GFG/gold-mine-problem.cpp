// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> mat)
    {
        // code here
        int res = INT_MIN;
    for(int j = 1; j < m; j++) {
    	for(int i = 0; i < n; i++) {
    		int up = (i-1 >= 0 ? mat[i-1][j-1] : 0);
    		int dn = (i+1 < n ? mat[i+1][j-1] : 0);
    		mat[i][j] += max(up, max(dn, mat[i][j-1]));
    	}
    }
    for(int i = 0; i < n; i++)
    	    res = max(res, mat[i][m-1]);
    return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends