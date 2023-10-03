class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        if(numRows>=1)
        {
            ans.push_back({1});
        }
        if(numRows>=2){
            ans.push_back({1,1});
        }
        
        vector<int> curr;
        for(int i=2;i<numRows;i++){
            curr.push_back(1);

            for(int j=0;j<ans[i-1].size()-1;j++){
                curr.push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            curr.push_back(1);
            ans.push_back(curr);
            curr.clear();
        }

        return ans;
    }
};