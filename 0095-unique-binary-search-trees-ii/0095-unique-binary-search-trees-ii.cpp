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
    vector<TreeNode*> recursion(int left,int right){

        vector<TreeNode*> res;

        if(left>right){
            res.push_back(NULL);
            return res;
        }
        if(left==right){
            TreeNode* node= new TreeNode(left);
            res.push_back(node);
            return res;
        }

        for(int i=left; i<=right; i++){
            vector<TreeNode*> leftSubtree=recursion(left,i-1);
            vector<TreeNode*> rightSubtree=recursion(i+1,right);
            for(int j=0; j<leftSubtree.size(); j++){
                for(int k=0; k<rightSubtree.size(); k++){
                    TreeNode* node=new TreeNode(i);
                    node->left=leftSubtree[j];
                    node->right=rightSubtree[k];
                    res.push_back(node);
                }
            }

        }
        return res;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        return recursion(1,n);
    }
};