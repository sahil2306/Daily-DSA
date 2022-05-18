// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

    void helper(string S, int idx, string curr, vector<string> &ans){
        if(idx==S.size()){
            ans.push_back(curr);
            return;
        }
        curr+=S[idx];
        if(idx<(S.size()-1))helper(S,idx+1,curr+" ",ans);
        helper(S,idx+1,curr,ans);
    }
    
    vector<string> permutation(string S){
        // Code Here
        string curr="";
        vector<string> ans;
        helper(S,0,curr,ans);
        return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends