class Solution {
public:
    vector<vector<int>> ans;
    int permutation(vector<int> &nums, int ind, vector<int> curr){
        if(ind==nums.size()){
            vector<int> t = curr;
            ans.push_back(t);
            return 1;
        }
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>-11){
                int val = nums[i];
                nums[i]=-15;
                
                curr.push_back(val);
                count+=permutation(nums,ind+1,curr);
                curr.pop_back();
                
                nums[i]=val;
            }
        }
        
        return count;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        permutation(nums,0,curr);
        return ans;
    }
};