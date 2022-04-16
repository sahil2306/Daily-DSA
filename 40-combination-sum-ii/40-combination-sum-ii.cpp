class Solution {
public:
    vector<vector<int>> ans;
    int helper(vector<int>& can, int target, vector<int> curr, int ind){
        if(target==0){
            ans.push_back(curr);
            return 1;
        }
        
        int c=0, prev = -1;
        for(int i=ind;i<can.size();i++){
            if(target>=can[i] and prev!=can[i]){
                curr.push_back(can[i]);
                c+=helper(can,(target-can[i]),curr,i+1);
                curr.pop_back();
                prev=can[i];
            }
        }
        
        return c;
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        int ind=0;
        helper(candidates,target,curr,ind);
        return ans;
    }
};