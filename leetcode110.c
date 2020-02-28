/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    int d1 = maxDepth(root->left);
    int d2 = maxDepth(root->right);
    if (d1 == -2 || d2 == -2 || abs(d1 - d2) > 1) return -2;
    return fmax(d1, d2) + 1;
}

bool isBalanced(struct TreeNode* root) {
    return maxDepth(root) >= 0;
}