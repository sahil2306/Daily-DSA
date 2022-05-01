class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=n,i=0;    
        
        while(i<n){
            ans^=nums[i]^i;
            i++;
        }
        
        return ans;
        
    }
};