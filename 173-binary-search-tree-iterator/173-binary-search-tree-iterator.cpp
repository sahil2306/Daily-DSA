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
class BSTIterator {
    vector<int> trav;
    int i;
public:
    
    void inOrder(TreeNode *root){
        if(!root){
            return;
        }
        inOrder(root->left);
        trav.push_back(root->val);
        inOrder(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        inOrder(root);
        i=0;
    }
    
    int next() {
        return trav[i++];
    }
    
    bool hasNext() {
        if((i)!=trav.size()){
            return true;
        }
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */