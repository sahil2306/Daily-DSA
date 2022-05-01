class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),ans=n,i=0;    
        
        while(i<n){
            ans^=nums[i]^(i++);
        }
        
        return ans;
        
    }
};