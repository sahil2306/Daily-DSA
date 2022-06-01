class Solution {
public:
    int minDistance(string s1, string s2) {
        int n1 = s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));

        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(i==0 or j==0){
                    dp[i][j]=(j==0?i:j);
                    continue;
                }
                int upd = dp[i-1][j-1];
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = upd;
                    continue;
                }
                //insert:
                int ins = dp[i][j-1];
                //delete
                int del = dp[i-1][j];
                dp[i][j] = min(ins,min(upd,del))+1;
            }
        }
        return dp[n1][n2];
    }
};