class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int k=(mat.size()-1);k>=0;k--){
            vector<int> v;
            int j=0,i=k;
            while(i<mat.size() and j<mat[0].size()){
                v.push_back(mat[i][j]);
                i++;j++;
            }
            sort(v.begin(),v.end());
            j=0,i=k;
            int p=0;
            while(i<mat.size() and j<mat[0].size()){
                mat[i][j]=v[p++];
                i++;j++;
            }
        }
        for(int k=(mat[0].size()-1);k>=0;k--){
            vector<int> v;
            int j=k,i=0;
            while(i<mat.size() and j<mat[0].size()){
                v.push_back(mat[i][j]);
                i++;j++;
            }
            sort(v.begin(),v.end());
            j=k,i=0;
            int p=0;
            while(i<mat.size() and j<mat[0].size()){
                mat[i][j]=v[p++];
                i++;j++;
            }
        }
        return mat;
    }
};