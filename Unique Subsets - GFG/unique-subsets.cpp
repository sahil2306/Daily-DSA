// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> temp;
        
        sort(arr.begin(), arr.end());

        
        rec(0,arr,n,temp,ans,s);
        
        for(auto x: s)
        {
            ans.push_back(x);
            
        }
        
        return ans;
    }
    
    void rec(int index,vector<int> arr, int n, vector<int> temp, vector<vector<int>> ans, set<vector<int>> &s){
        if(index == n){
            s.insert(temp);
            return;
        }
        
        rec(index+1,arr,n,temp,ans,s);
        
        temp.push_back(arr[index]);
        
        rec(index+1,arr,n,temp,ans,s);
        
        temp.pop_back();
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends