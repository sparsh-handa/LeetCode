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
    struct S {
        bool isBST;
        int minVal, maxVal, sum;
    };
    
    S helper(TreeNode *node, int &res) {
        if (!node) {
            return { true, INT_MAX, INT_MIN, 0 };
        }
        S left = helper(node->left, res);
        S right = helper(node->right, res);
        if (left.isBST && right.isBST && left.maxVal < node->val && right.minVal > node->val) {
            int sum = left.sum + right.sum + node->val;
            res = max(res, sum);
            return { true, min(left.minVal, node->val), max(right.maxVal, node->val), sum };
        } else {
            return { false, 0, 0, 0 };
        }
    }
public:
    int maxSumBST(TreeNode* root) {
        int res = 0;
        helper(root, res);
        return res;
    }
};