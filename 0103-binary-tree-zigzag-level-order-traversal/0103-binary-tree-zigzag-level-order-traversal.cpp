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
    void nthlevel1(TreeNode *root,int curr,int req,vector<int> &v){
        if(root==NULL) return;
        if(curr==req){
            v.push_back(root->val);
            return;
        }
        nthlevel1(root->left,curr+1,req,v);
        nthlevel1(root->right,curr+1,req,v);
    }
    void nthlevel2(TreeNode *root,int curr,int req,vector<int> &v){
        if(root==NULL) return;
        if(curr==req){
            v.push_back(root->val);
            return;
        }
        nthlevel2(root->right,curr+1,req,v);
        nthlevel2(root->left,curr+1,req,v);
    }
    void helper(TreeNode *root,vector<vector<int>> &ans){
        int n=level(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            if(i%2!=0) nthlevel1(root,1,i,v);
            else nthlevel2(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root,ans);
        return ans;
    }
};