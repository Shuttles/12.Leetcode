/*************************************************************************
	> File Name: 226.czy.false.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  2/29 11:28:28 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if (!root) return NULL;
    root->left = invertTree(root->right);
    root->right = invertTree(root->left);
    return root;
}
