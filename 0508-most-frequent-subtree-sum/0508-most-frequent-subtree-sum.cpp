/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int getSum(TreeNode* root, unordered_map<int,int> &freq){
        if(!root){
            return 0;
        }

        int l = getSum(root->left,freq);
        int r = getSum(root->right,freq);

        int curr=root->val+l+r;
        freq[curr]++;

        return curr;

    }

    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        unordered_map<int,int> freq;

        getSum(root,freq);
        
        int m = 1;
        for(auto i:freq){
            m = max(m,i.second);
        }

        for(auto i:freq){
            if(m==i.second){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};