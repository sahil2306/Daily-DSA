class Solution {
public:
    int tabu(string s,vector<int>& dp){
        for(int idx=s.size();idx>=0;idx--){
            if (idx == s.length()) {
                dp[idx] = 1;
                continue;
            }
            char ch = s[idx];
            if(ch=='0'){
                dp[idx]=0;
                continue;
            }
            int count = dp[idx+1];

            if(idx<(s.size()-1)){
                char ch2 = s[idx+1];
                int no = (ch-'0')*10 + (ch2-'0');
                if(no<27){
                    count += dp[idx+2];//count+=helper(s,idx+2,dp);
                }
            }
            dp[idx] = count;
        }

        return dp[0];
    }
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        int ans=0;
        return tabu(s,dp);
    }
};