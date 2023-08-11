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
    int recur(TreeNode* root){
        if(root==NULL){
            return 1;
        }
        int left = recur(root->left);
        int right = recur(root->right);
        int ans = max(left,right)+1;
        return ans;
    }
    int maxDepth(TreeNode* root) {
        int ans = recur(root);
        return ans-1;
    }
};