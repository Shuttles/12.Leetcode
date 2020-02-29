/*************************************************************************
	> File Name: 112.yfz.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  2/29 18:36:23 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if (!root) return false;
    sum -= root->val;
    if (!root->left && !root->right) return (sum == 0);
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
}
