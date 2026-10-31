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
    void nthlevel(TreeNode *root,int curr,int req,vector<int> &v){
        if(root==NULL) return;
        if(curr==req){
            v.push_back(root->val);
            return;
        }
        nthlevel(root->left,curr+1,req,v);
        nthlevel(root->right,curr+1,req,v);
    }
    vector<int> nthlevell(TreeNode *root,int curr,int req){
        vector<int> v;
        nthlevel(root,curr,req,v);
        return v;
    }
    void helper(TreeNode *root,vector<vector<int>> &ans){
        int n=levels(root);
        for(int i=1;i<=n;i++){
            vector<int> x=nthlevell(root,1,i);
            ans.push_back(x);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root,ans);
        return ans;
    }
};