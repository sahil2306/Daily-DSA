class Solution {
public:
    int minDistance_memo(string &s1, string &s2, vector<vector<int>> &dp, int i, int j){
        if(i==0 or j==0){
            return dp[i][j]=(j==0?i:j);
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        //udpdate
        int upd = minDistance_memo(s1,s2,dp,i-1,j-1);
        if(s1[i-1]==s2[j-1]){
            return dp[i][j] = upd;
        }
        //insert:
        int ins = minDistance_memo(s1,s2,dp,i,j-1);
        //delete
        int del = minDistance_memo(s1,s2,dp,i-1,j);
        dp[i][j] = min(ins,min(upd,del))+1;
        
        return dp[i][j];
    }


    int minDistance(string word1, string word2) {
        int n1 = word1.size(),n2=word2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        return minDistance_memo(word1,word2,dp,n1,n2);
    }
};