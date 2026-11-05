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
    int level(TreeNode *root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void nthlevel(TreeNode *root,int curr,int req,vector<int> &ans){
        if(root==NULL) return;
        if(curr==req){
            ans[req]=root->val;
            return;
        }
        nthlevel(root->left,curr+1,req,ans);
        nthlevel(root->right,curr+1,req,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        int n=level(root);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            nthlevel(root,0,i,ans);
        }
        return ans;
    }
};