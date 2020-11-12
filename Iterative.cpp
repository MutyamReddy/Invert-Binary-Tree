class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    stack<TreeNode*>s;
    s.push(root);
    while (!s.empty()) {
        TreeNode* p = s.top();
        s.pop();
        if (p!=NULL) {
            s.push(p->left);
            s.push(p->right);
            swap(p->left, p->right);
        }
    }
    return root;
}
};
