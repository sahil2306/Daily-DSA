class Solution {
public:
    vector<vector<int>> dp;
    int recur(vector<int>& coins, int total, int idx){
        if(total==0){
            return 0;
        }
        if(total>0 and idx>=coins.size()){
            return INT_MAX;
        }
        if(dp[idx][total]!=-1){
            return dp[idx][total];
        }
        int a=100000;
        if(total>=coins[idx]){
            a = recur(coins,total-coins[idx],idx)+1;
        }

        return dp[idx][total] = min(a, recur(coins,total,idx+1));

    }
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(coins.size()+1,vector<int>(amount+1, -1));
        int x = recur(coins,amount,0);
        if(x>=100000){
            return -1;
        }
        return x;
    }
};