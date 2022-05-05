class Solution {
public:
    long long int dp[38]={0};
    int tribonacci(int n) {
        if(n==0){
            return dp[n]=0;
        }
        if(n<3 and n>0){
            return dp[n]=1;
        }
        
        if(dp[n]!=0){
            cout<<dp[2];
            return dp[n];
        }
        
        return dp[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);   
    }
};