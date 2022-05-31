class Solution {
public:
    int longestCommonSubsequence_memo(string& s1, string& s2,int i, int j, vector<vector<int>>& dp) {
    
        if(i==s1.size() || j==s2.size()){
            return dp[i][j]=0;
        }

        if(dp[i][j]!=0)return dp[i][j];

        if(s1[i]==s2[j]){
            dp[i][j] = longestCommonSubsequence_memo(s1,s2,i+1,j+1,dp)+1;
        }
        else{
            dp[i][j] = max(longestCommonSubsequence_memo(s1,s2,i+1,j,dp),longestCommonSubsequence_memo(s1,s2,i,j+1,dp));
        }

        return dp[i][j];
    }
    int longestCommonSubsequence(string s1, string s2) {
        int n1 = s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        return longestCommonSubsequence_memo(s1,s2,0,0,dp);   
    }
};