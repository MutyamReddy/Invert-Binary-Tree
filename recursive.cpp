class Solution {
public:
    TreeNode* solve(TreeNode* root){
        if(root==NULL) return root;
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        solve(root->left);
        solve(root->right);
        return temp;  
    }
    TreeNode* invertTree(TreeNode* root) {
       solve(root);
        return root;
    }
};
