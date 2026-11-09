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
    long long maxi(TreeNode *root){
        if(root==NULL) return LLONG_MIN;
        long long l=maxi(root->left);
        long long r=maxi(root->right);
        return max((long long)(root->val),max(l,r));
    }
    long long mini(TreeNode *root){
        if(root==NULL) return LLONG_MAX;
        long long l=mini(root->left);
        long long r=mini(root->right);
        return min((long long)(root->val),min(l,r));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        bool b=isValidBST(root->left);
        if(!b) return false;
        bool c=isValidBST(root->right);
        if(!c) return false;
        long long x=maxi(root->left);
        long long y=mini(root->right);
        if(root->left && x>=root->val) return false;
        if(root->right && y<=root->val) return false;
        return true;

    }
};