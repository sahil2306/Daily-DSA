// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void sieve(int n, bool primes[]){
	    primes[0]=0;
	    primes[1]=0;
	    
	    for(int i=2;(i*i)<=n;i++){
	        if(primes[i]){
    	        for(int j=i*i;j<=n;j+=i){
    	            primes[j]=0;
    	        }
	        }
	    }
	}
	
	int superPrimes(int n)
	{
	    bool primes[n+1];
	    memset(primes,true,sizeof(primes));
	    sieve(n,primes);
	    // Your code goes here
	    int ans=0;
	    for(int i=2;i<=n;i++){
	        if(primes[i-2] and primes[i]){
	            ans++;
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends