class Solution {
public:
    int helper(string s,int idx,vector<int>& dp){
        if(idx==s.size()) return dp[idx]=1;
        if(dp[idx]!=-1) return dp[idx];

        char ch = s[idx];
        if(ch=='0')return dp[idx]=0;
        
        int count = helper(s,idx+1,dp);

        if(idx<s.size()-1){
            char ch2 = s[idx+1];
            int no = (ch-'0')*10 + (ch2-'0');
            if(no<27){
                count+=helper(s,idx+2,dp);
            }
        }

        return dp[idx]=count;
    }
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        int ans=0;
        return helper(s,0,dp);
    }
};