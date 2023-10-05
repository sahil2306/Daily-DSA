class Solution {
public:
    unordered_map<int,int> umap;
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        n/=3;

        vector<int> ans;

        for(auto i : nums){
            umap[i]++;
        }

        for(auto i:umap){
            if(i.second>n){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};