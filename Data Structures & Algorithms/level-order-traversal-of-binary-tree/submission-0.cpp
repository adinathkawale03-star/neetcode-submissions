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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> ans;
       if(!root) return ans;
       queue<TreeNode*> qu;
       qu.push(root);
       while(!qu.empty()){
        int n=qu.size();
        vector<int> a;
        for(int i=0;i<n;i++){
            root=qu.front();
            qu.pop();
            a.push_back(root->val);
            if(root->left) qu.push(root->left);
            if(root->right) qu.push(root->right);
        }
        ans.push_back(a);
       } 
       return ans;
    }
};
