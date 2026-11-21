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
    void inorder(TreeNode* root,vector<int>& in,int k){
        if(!root) return;
        int n=in.size();
        if(n>=k) return;
        inorder(root->left,in,k);
        in.push_back(root->val);
        inorder(root->right,in,k);
    }
    int kthSmallest(TreeNode* root, int k) {
       vector<int> in;
       inorder(root,in,k);
       return in[k-1];  
    }
};
