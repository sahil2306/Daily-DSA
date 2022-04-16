class Solution {
public:
    vector<vector<int>> ans;
    int helper(vector<int>& can, int target, vector<int> curr, int ind){
        if(target==0){
            ans.push_back(curr);
            return 1;
        }
        
        int c=0;
        for(int i=ind;i<can.size();i++){
            if(target>=can[i]){
                curr.push_back(can[i]);
                c+=helper(can,(target-can[i]),curr,i);
                curr.pop_back();
            }
        }
        
        return c;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        int ind=0;
        helper(candidates,target,curr,ind);
        return ans;
    }
};