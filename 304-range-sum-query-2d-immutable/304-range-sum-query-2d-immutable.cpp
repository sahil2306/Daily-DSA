class NumMatrix {
    vector<vector<int>> presum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        
        for(int i=0;i<matrix.size();i++){
            vector<int> t;int s=0;
            for(int j=0;j<matrix[0].size();j++){
                s+=matrix[i][j];
                t.push_back(s);
            }
            presum.push_back(t);
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int ans=0;
        
        // if(r1==r2 and c1==c2){
        //     if(c1>0){
        //         ans+=presum[r1][c1]-presum[r1][c1-1];
        //     }
        //     else{
        //         ans+=presum[r1][c1];
        //     }
        //     return ans;
        // }
        for(int i=r1;i<=r2;i++){
            if(c1>0){
                ans+=presum[i][c2]-presum[i][c1-1];
            }
            else{
                ans+=presum[i][c2];
            }
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */