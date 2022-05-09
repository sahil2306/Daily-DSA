// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	bool isValid(int x, int y, int N){
	    if(x>=N or y>=N or x<0 or y<0){
	        return false;
	    }
	    return true;
	}
	double findProb(int N,int start_x, int start_y, int K)
	{
	    // Code here
	    vector<vector<double>>curr(N, vector<double>(N, 0.0));
	    curr[start_x][start_y] = 1.0;
	    
	    double ans=0.0;
	    
	    int X[] = {1, 1, -1, -1, 2, 2, -2, -2};
	    int Y[] = {2, -2, 2, -2, 1, -1, 1, -1};
	    
	    for(int k=0;k<K;k++){
	        vector<vector<double>>next(N, vector<double>(N, 0.0));
	        for(int i=0;i<N;i++){
	            for(int j=0;j<N;j++){
	                if(curr[i][j] != 0){
	                    for(int m=0;m<8;m++){
	                        int nr = i+X[m];
	                        int nc = j+Y[m];
	                        if(isValid(nr,nc,N)){
	                            next[nr][nc] += curr[i][j]/8;
	                        }
	                    }
	                    
	                }     
	            }
	        }
	        curr=next;
	    }
	    
	    for(int i = 0; i < N; i++){
	        for(int j = 0; j < N; j++){
	            ans += curr[i][j];
	        }
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N, start_x, start_y, steps;
		cin >> N >> start_x >> start_y >> steps;
		Solution ob;
		double ans = ob.findProb(N, start_x, start_y, steps);
		cout << fixed << setprecision(6) << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends