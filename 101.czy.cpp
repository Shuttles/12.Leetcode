/*************************************************************************
	> File Name: 101.czy.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  2/29 14:52:23 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *invertTree(struct TreeNode *root) {
    if (!root) return NULL;
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    root->left = invertTree(root->left);
    root->right = invertTree(root->right);
    return root;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (!p && !q) return true;
    return (p && q && (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}

bool isSymmetric(struct TreeNode* root){
    if (!root) return true;
    root->right = invertTree(root->right);
    struct TreeNode *p = root->left, *q = root->right;
    //if (p->val - q->val) return false;
    if (!isSameTree(p, q)) return false;
    if (!isSameTree(p, q)) return false;
    return true;
}
