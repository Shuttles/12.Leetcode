/*************************************************************************
	> File Name: 101.yfz.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  2/29 14:57:15 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool is_check(struct TreeNode *p, struct TreeNode *q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    if (p->val - q->val) return false;
    return is_check(p->left, q->right) && is_check(p->right, q->left);
}

bool isSymmetric(struct TreeNode* root){
    if (!root) return true;
    return is_check(root->left, root->right);
    return true;
}
