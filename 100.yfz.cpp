/*************************************************************************
	> File Name: 100.yfz.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  2/29 14:39:22 2020
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (!p && !q) return true;
    return (p && q && (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));   
}
