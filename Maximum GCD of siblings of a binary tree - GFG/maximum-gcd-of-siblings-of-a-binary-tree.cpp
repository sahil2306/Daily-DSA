// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    int gcd(int a,int b){
        return b==0 ? a : gcd(b,a%b);
    }
    
    int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        // code here
        sort(arr.begin(), arr.end());
        if(arr.size()<2){
            return 0;
        }
        
        int prevp = INT_MIN;
        int prevc = INT_MIN;
        
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            int p = arr[i][0];
            int c = arr[i][1];
            
            
            
            if(p==prevp){
                ans = max(ans,gcd(c,prevc));
            }
            prevp=p;
            prevc=c;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,u,v;
        cin>>N;
        
        vector<vector<int>> arr;
        
        for(int i=0; i<N-1; i++)
        {
            cin>>u>>v;
            vector<int> edge;
            edge.push_back(u);
            edge.push_back(v);
            arr.push_back(edge);
        }

        Solution ob;
        cout << ob.maxBinTreeGCD(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends