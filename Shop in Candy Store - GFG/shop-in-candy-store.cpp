// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int arr[], int n, int k)
    {
        // Write Your Code here
        sort(arr,arr+n);
       int p=n/(k+1);
       if(n%(k+1)!=0){
           p++;             // Minimum Number of candies,we need to buy!!
       }
       int i=0;
       int j=n-1;
       int ans1=0;
       int ans2=0;
       while(p--){        // Buying the candies!!
           ans1+=arr[i];
           ans2+=arr[j];
           i++;
           j--;
       }
       return {ans1,ans2};
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends