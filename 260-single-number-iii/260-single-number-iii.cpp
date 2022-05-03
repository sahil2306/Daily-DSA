class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int xorsum=0;
        
        for(int i=0;i<nums.size();i++){
            xorsum^=nums[i];
        }
        unsigned int mask = xorsum&(-xorsum);
        
        int a=0,b=0;
        
        for(int e:nums){
            if((mask&e)==0){a^=e;}
            else{b^=e;}
        }
            
        return {a,b};
        
    }
};