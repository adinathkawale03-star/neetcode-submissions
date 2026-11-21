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
    TreeNode* invertTree(TreeNode* root) {
       if(!root) return nullptr;
       TreeNode* ans=root;
       queue<TreeNode*> qu;
       qu.push(root);
       while(!qu.empty()){
         root=qu.front();
         qu.pop();
         swap(root->left,root->right);
         if(root->left) qu.push(root->left);
         if(root->right) qu.push(root->right);
       }
       return ans;
    }
};
