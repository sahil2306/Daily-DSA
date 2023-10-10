class Solution {
public:
    unordered_map<string,int> memo;

    int dp(vector<int>& stones,int idx,int left, int right){
        string s = "";
        s=to_string(idx)+'+'+to_string(left)+'+'+to_string(right);
        if(memo.find(s)!=memo.end()){
            return memo[s];
        }

        if(idx>=stones.size()){
            return abs(left-right);
        }

        return memo[s] = min(dp(stones,idx+1,left+stones[idx],right),dp(stones,idx+1,left,right+stones[idx]));
    }

    int lastStoneWeightII(vector<int>& stones) {
        return dp(stones,0,0,0);
    }
};