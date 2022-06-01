class Solution {
public:
    
    string removeStars(string s2){
        string s="";
        if(s2.size()==0){
            return s2;
        }
        s+=s2[0];
        
        int i=1,k=0;
        while(i<s2.size()){
            while(i<s2.size() and s[k]=='*' and s2[i]=='*'){
                i++;    
            }
            if(i<s2.size()){
                s+=s2[i];
                k++;
            }
            i++;
        }
        return s;
    }
    
    bool isMatch_memo(string &s1, string &s2, vector<vector<int>> &dp, int i, int j){
        if(i==0 or j==0){
            if(i==0 and j==0)return dp[i][j]=1;
            if(j==1 and s2[j-1]=='*')return dp[i][j]=1;
            return dp[i][j]=0;
        }
        
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i-1]==s2[j-1] or s2[j-1]=='?'){
            return dp[i][j]=isMatch_memo(s1,s2,dp,i-1,j-1);
        }
        else if(s2[j-1]=='*'){
            bool res=0;
            res = res || isMatch_memo(s1,s2,dp,i-1,j);
            res = res || isMatch_memo(s1,s2,dp,i,j-1); 
            return dp[i][j]=res;
        }
        return dp[i][j]=0;
    }
    
    bool isMatch(string s1, string s2) {
        
        s2 = removeStars(s2);
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        return isMatch_memo(s1,s2,dp,n1,n2);
    }
};