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
    TreeNode *iop(TreeNode *root){ //inorder predecessor
        TreeNode *pred=root->left;
        while(pred->right){
            pred=pred->right;
        }
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL) return NULL; //leaf node
            else if(root->left==NULL || root->right==NULL){ //node with 1 child
                if(root->left) return root->left;
                else return root->right;
            }
            else{ // node with 2 children
                TreeNode *pred=iop(root);
                root->val=pred->val;
                root->left=deleteNode(root->left,pred->val);
            }
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else root->right=deleteNode(root->right,key);
        return root;
    }
};