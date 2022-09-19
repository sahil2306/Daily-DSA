class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(umap.find(x)!=umap.end() and umap[x]!=i){
                ans.push_back(i);
                ans.push_back(umap[x]);
                return ans;
            }
        }
        
        return ans;
    }
};