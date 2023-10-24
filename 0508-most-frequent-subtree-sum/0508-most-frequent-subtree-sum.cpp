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
    unordered_map<int,int> freq;
    int getSum(TreeNode* root){
        if(!root){
            return 0;
        }

        int l = getSum(root->left);
        int r = getSum(root->right);

        freq[root->val+l+r]++;

        return root->val+l+r;

    }

    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        getSum(root);

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