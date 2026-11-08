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
    TreeNode *helper(vector<int> preorder,int prelow,int prehigh,vector<int> inorder,int inlow,int inhigh){
        if(prelow>prehigh) return NULL;
        TreeNode *root=new TreeNode(preorder[prelow]);
        if(prelow==prehigh) return root;
        int i=inlow;
        while(i<=inhigh){
            if(inorder[i]==preorder[prelow]) break;
            i++;
        }
        int lc=i-inlow;
        root->left=helper(preorder,prelow+1,prelow+lc,inorder,inlow,i-1);
        root->right=helper(preorder,prelow+lc+1,prehigh,inorder,i+1,inhigh);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        TreeNode *root=helper(preorder,0,n-1,inorder,0,n-1);
        return root;
    }
};