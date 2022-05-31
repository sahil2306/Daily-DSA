class Solution {
public:
    int numDistinct(string s1, string s2) {
                
        int n1 = s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));

        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(j==0){
                    dp[i][j]=1;continue;
                }
                if(i<j){
                    dp[i][j]=0;continue;
                }
                long long int count=0;
                if(s1[i-1]==s2[j-1]){
                    count+=dp[i-1][j-1]; 
                }
                count+=dp[i-1][j];
                dp[i][j]=count;

            }
        }
        return dp[n1][n2];
    }
};