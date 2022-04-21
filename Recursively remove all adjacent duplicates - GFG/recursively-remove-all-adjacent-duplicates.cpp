// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    
    string remove(string s)
   {
       int i,count=0;
       for(i=0;i<s.length();i++)
       {
           if(s[i]==s[i+1])
           {
               int j=i;
               while(s[i+1]==s[i])
               {
                   i++;
               }
               s.erase(j,i+1-j);
               i=i-(i-j)-1;
               count++;
           }
       }
       if(count==0)
       {return s;}
       else
       {return remove(s);}
   }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends