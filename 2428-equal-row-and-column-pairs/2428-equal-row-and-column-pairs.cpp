class Solution {
public:
    
    int equalPairs(vector<vector<int>>& grid) {
        static auto _ = [](){
            ios::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);
            return nullptr;
        }();
        unordered_map<string,int> rows;
        int ans=0;
        for(int i=0;i<grid.size();i++){
            string s = "";
            for(int j=0;j<grid[0].size();j++){
                s+=to_string(grid[i][j])+';';
            }
            rows[s]++;
        }
        for(int i=0;i<grid[0].size();i++){
            string s = "";
            for(int j=0;j<grid.size();j++){
                s+=to_string(grid[j][i])+';';
            }
            if(rows.find(s)!=rows.end()){
                ans+=rows[s];
            }
        }
        return ans;
    }
};