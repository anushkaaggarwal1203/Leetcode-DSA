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
    int levels(TreeNode *root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    int balance(TreeNode *root){
        int lhs=levels(root->left);
        int rhs=levels(root->right);
        int a=abs(lhs-rhs);
        if(a==0 || a==1) return 1;
        return 0;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(!balance(root)) return false;
        if(!isBalanced(root->left) || !isBalanced(root->right)) return false;
        return true;
    }
};