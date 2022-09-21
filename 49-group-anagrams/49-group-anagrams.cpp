class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 
        unordered_map<string,vector<string>> umap;
        
        for(string s:strs){
             string t = s;
             sort(t.begin(),t.end());
             umap[t].push_back(s);
         }
        
         for(auto v:umap){
             ans.push_back(v.second);
         }
        return ans;
    }    
};