//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        
        vector<int> dp((n+1),0);
        vector<int> p;
        
        p.push_back(0);
        
        for(int i=0;i<n;i++){
            p.push_back(price[i]);
        }
        
        
        for(int i=0;i<=n;i++){
            int curr=0;
            for(int j=0;j<i;j++){
                curr = max(curr,dp[j]+p[i-j]);
            }
            dp[i] = max(dp[i],curr);
        }
        
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends