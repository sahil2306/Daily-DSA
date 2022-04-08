// { Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int nums[],int n)
    {
        // code here
        vector<int> ans(n,-1);
        unordered_map<int,int> mp;
        stack<int> st;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            while(!st.empty() and (mp[nums[i]]>mp[nums[st.top()]])){
                ans[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends