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
    TreeNode* solve(vector<int>& nums, int start, int end) {
        if (start > end) {
            return nullptr;
        }

        int mid = (start + end) / 2;

        TreeNode* ans = new TreeNode(nums[mid]);

        ans->left = solve(nums, start, mid - 1);

        ans->right = solve(nums, mid + 1, end);

        return ans;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();

        return solve(nums, 0, n - 1);
    }
};