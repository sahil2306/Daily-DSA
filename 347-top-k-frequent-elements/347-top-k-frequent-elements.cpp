class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        
        unordered_map<int,int> umap;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        
        for(int i:nums){
            umap[i]++;
        }
        
        for(auto it : umap){
            q.push({it.second,it.first});
            if(q.size()>k){
                q.pop();
            }
        }
        
        while(!q.empty()){
            auto it = q.top();q.pop();
            ans.push_back(it.second);
        }
        return ans; 
    }
};