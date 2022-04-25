// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) {
        // code here
        unordered_map<int,int> freq1,freq2;
        unordered_map<string,int> mpp;
        
        int c1=0,c2=0,c3=0;
        
        for(int i=0;i<N;i++){
            if(freq1.find(X[i])!=freq1.end()){
                c1+=freq1[X[i]];
            }
            freq1[X[i]]++;
        }
        for(int i=0;i<N;i++){
            if(freq2.find(Y[i])!=freq2.end()){
                c2+=freq2[Y[i]];
            }
            freq2[Y[i]]++;
        }
        for(int i=0; i<N; i++){
            string s = to_string(X[i]) + "_" + to_string(Y[i]);
            if(mpp.find(s)!=mpp.end()){
                c3+=mpp[s];
            }
            mpp[s]++;
        }
        
        return (c1+c2-(2*c3));
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends