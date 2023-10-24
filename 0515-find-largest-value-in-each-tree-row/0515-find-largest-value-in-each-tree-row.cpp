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
    vector<int> largestValues(TreeNode* root) {
        if(!root){
            return {};
        }
        queue<TreeNode*> q,q1;
        vector<int> ans;

        q.push(root);

        while(!q.empty()){
            int val = INT_MIN;
            int n = q.size();
            for(int i=0;i<n;i++ ){
                TreeNode* curr = q.front();q.pop();
                val = max(val, curr->val);
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
            }
            ans.push_back(val);
        }
        return ans;
    }
};