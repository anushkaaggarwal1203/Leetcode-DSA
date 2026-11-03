class Solution {
public:
    bool find(TreeNode* root, TreeNode* a) {
        if(root == NULL) return false;
        if(root == a) return true;
        return find(root->left, a) || find(root->right, a);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q) return root;

        bool lp = find(root->left, p);
        bool lq = find(root->left, q);

        if(lp != lq) return root;
        if(lp) return lowestCommonAncestor(root->left, p, q);
        return lowestCommonAncestor(root->right, p, q);
    }
};