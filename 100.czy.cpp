/*************************************************************************
	> File Name: 100.czy.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  2/28 16:49:30 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode Node;

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (!p && !q) return true;
    if (!p || !q) return false;
    if (p->val - q->val) return false;
    if (!isSameTree(p->left, q->left)) return false;
    if (!isSameTree(p->right, q->right)) return false;
    return true;
}
