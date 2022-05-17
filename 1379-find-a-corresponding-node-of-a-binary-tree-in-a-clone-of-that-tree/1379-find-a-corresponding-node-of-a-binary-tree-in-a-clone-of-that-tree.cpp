/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *root1, *root2;
    void inOrder(TreeNode* root1, TreeNode* root2,TreeNode* target, TreeNode* &ans){
        if(!root1){
            return;
        }
        
        inOrder(root1->left,root2->left,target,ans);
        if(target == root1){
            ans=root2;
            return;
        }
        inOrder(root1->right,root2->right,target,ans);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        root1 = original, root2 = cloned;
        TreeNode *ans;
        inOrder(root1,root2,target,ans);
        
        return ans;
        
    }
};