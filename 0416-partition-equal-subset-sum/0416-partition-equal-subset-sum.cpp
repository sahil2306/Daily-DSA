class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int targetSum,total=0;
        const int n = nums.size();

        for(auto i:nums){
            total+=i;
        }   
        if(total%2==0){
            targetSum=total/2;
        }
        else{
            return 0;
        }

        vector<vector<int>> dp(n+1, vector<int>(targetSum+1,0));

        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=targetSum;j++){
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];                     
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][targetSum];
    }
};