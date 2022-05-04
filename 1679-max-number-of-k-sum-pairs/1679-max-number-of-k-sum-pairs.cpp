class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        multiset<int> s;
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--){
            
            if(s.find(k-nums[i])==s.end()){
                s.insert(nums[i]);
            }
            else{
                auto pos = s.find(k-nums[i]);
                s.erase(pos);
                ans++;
            }
        }
        return ans;
    }
};