class Solution {
public:
    int mod = 1e9+7;
    long long memo(string s,vector<long long>& dp){
        dp[s.size()]=1;
        for(int idx=s.size()-1;idx>=0;idx--){
            char ch = s[idx];
            if(ch=='0'){
                dp[idx]=0;
                continue;
            }
            long long count=0;
            if(ch=='*'){
                count = (count+9*dp[idx+1])%mod;

                if(idx<(s.size()-1)){
                    char ch1 = s[idx+1];
                    if (ch1 >= '0' && ch1 <= '6') count = (count+2*dp[idx+2])%mod;
                    else if (ch1 >= '7' && ch1 <= '9') count = (count+1*dp[idx+2])%mod;
                    else count = (count+15*dp[idx+2])%mod;
                }
            }
            else{
                 count = count+(1*dp[idx+1])%mod;
                if(idx<(s.size()-1)){
                    char ch2 = s[idx+1];
                    if(ch2=='*' and ch=='1'){
                        count = (count+9*dp[idx+2])%mod;
                    }
                    else if(ch2=='*' and ch=='2'){
                        count = (count+6*dp[idx+2])%mod;
                    }
                    else if(ch2!='*'){
                        int num = (ch - '0') * 10 + (ch2 - '0');
                        if (num <= 26)
                            count = (count + 1*dp[idx+2])%mod;
                    }

                }
            }
            dp[idx]=count;
        }
        return dp[0];
    }
    int numDecodings(string s) {
        vector<long long> dp(s.size()+1,-1);
        long long ans = memo(s,dp);
        return int(ans);
    } 
};