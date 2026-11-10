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
    void insert(TreeNode *root,int val){
        if(root==NULL) return;
        if(val>root->val){
            if(root->right==NULL){
                root->right=new TreeNode(val);
            }
            else insert(root->right,val);
        }
        else{
            if(root->left==NULL){
                root->left=new TreeNode(val);
            }
            else insert(root->left,val);
        }
        return;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root=new TreeNode(preorder[0]);
        int n=preorder.size();
        for(int i=1;i<n;i++){
            insert(root,preorder[i]);
        }
        return root;
    }
};