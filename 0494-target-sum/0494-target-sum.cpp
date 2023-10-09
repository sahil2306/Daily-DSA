class Solution {
public:
    map<pair<int,int>,int> memo;
    int dp(vector<int>& nums, int target, int curr,int idx){

        if(memo.find({idx,curr})!=memo.end()){
            return memo[{idx,curr}];
        }

        if(idx>=nums.size() and curr==target){
            return 1;
        }
        if(idx>=nums.size()){
            return 0;
        }

        return memo[{idx,curr}] = dp(nums,target,curr+nums[idx],idx+1) + dp(nums,target,curr-nums[idx],idx+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return dp(nums,target,0,0);
    }
};