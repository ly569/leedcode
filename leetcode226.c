/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode TreeNode;

struct TreeNode* mirrorTree(struct TreeNode* root){
    if (root == NULL) return NULL;
    TreeNode *temp = root->left;
    root->left = mirrorTree(root->right);
    root->right = mirrorTree(temp);
    return root;
}