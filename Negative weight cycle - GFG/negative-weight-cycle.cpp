// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    int V=n;
	    int dist[V];
        for (int i = 0; i < V; i++){
            dist[i] = INT_MAX;
        }
        
        dist[0] = 0;
        int E = edges.size();
        for(int i=0;i<V;i++){
            for(int j=0;j<E;j++){
                int u = edges[j][0];
                int v = edges[j][1];
                int w = edges[j][2];
                
                if(dist[u] != INT_MAX && (dist[u]+w < dist[v])){
                    dist[v] = dist[u]+w;
                }
            }
        }
        
        for(int j=0;j<E;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];
            
            if(dist[u] != INT_MAX && (dist[u]+w < dist[v])){
                return 1;
            }
        }
        
        
        return 0;
	
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends