/*
 * @lc app=leetcode.cn id=993 lang=cpp
 *
 * [993] 二叉树的堂兄弟节点
 */

// @lc code=start
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
    int depth(TreeNode *root, int x, int d) {
        if (root == nullptr) return 0;
        if (root->val == x) return d;
        int l = depth(root->left, x, d + 1);
        if (l != 0) return l;
        return depth(root->right, x, d + 1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        return depth(root, x, 0) == depth(root, y, 0);
    }
};
// @lc code=end

