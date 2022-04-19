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
    TreeNode *f=NULL,*s=NULL;
    TreeNode *prev;
    
    void inOrder(TreeNode *root){
        if(!root){
            return;
        }
        
        inOrder(root->left);
        
        
        if(f==NULL && root->val<prev->val){
            f = prev;
        }
        if(f!=NULL && root->val<prev->val)
        {
            s = root;
        }
        
        prev = root;
        
        inOrder(root->right);
    }
        
    void recoverTree(TreeNode* root) {
        //Each node should have smaller left ones and greater right ones
        prev=new TreeNode(INT_MIN);
        inOrder(root);
        
        swap(f->val,s->val);
    }
};