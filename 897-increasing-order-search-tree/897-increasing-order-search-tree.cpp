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
    
    TreeNode *ans,*prev;
    
    void inOrder(TreeNode *root){
        if(!root){
            return;
        }
        inOrder(root->left);
        
        if(ans==NULL){
            ans = root;
        }
        else{
            prev->right=root;
        }
        prev=root;
        root->left=NULL;
        inOrder(root->right);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root){
            return NULL;
        }
        inOrder(root);
        return ans;
    }
};