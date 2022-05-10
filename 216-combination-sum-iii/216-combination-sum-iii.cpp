class Solution {
public:
    vector<vector<int>> ans;
    void helper(int k, int n, int ind, vector<int> path){
        if(path.size()==k and n==0){
            ans.push_back(path);
        }
        if(path.size()<k){
            for(int idx = ind;idx<=9;idx++){
                path.push_back(idx);
                n-=idx;

                helper(k,n,idx+1,path);

                n+=idx;
                path.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        helper(k,n,1,path);
        return ans;
    }
};