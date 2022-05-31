class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp((n+1),vector<int>(n+1));

        for(int gap=0;gap<n;gap++){
            for(int j=gap,i=0;j<n;j++,i++){
                if(i>=j){dp[i][j] = (i==j)?1:0;continue;}
                if(s[i]==s[j]){ 
                    dp[i][j]=dp[i+1][j-1]+2;
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
                }
            }
        }

        return dp[0][n-1];
    }
};