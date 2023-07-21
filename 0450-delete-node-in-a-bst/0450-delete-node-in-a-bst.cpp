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
    int minval(TreeNode* root) {
        if (root == NULL) return -1; 

        TreeNode* temp = root;
        int mini = INT_MAX;

        while (temp != NULL) {
            mini = min(mini, temp->val); 
            temp = temp->left;
        }

        return mini;
    }

    TreeNode* help(TreeNode* root, int key) {
        if (root == NULL) return root;

        if (root->val == key) {
            // 0 child
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            
            // 1 child
            if (root->left != NULL && root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else if (root->left == NULL && root->right != NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            
            // 2 children
            if (root->left != NULL && root->right != NULL) {
                int mini = minval(root->right);
                root->val = mini;
                root->right = help(root->right, mini);
            }
        }
        else if (root->val < key) {
            root->right = help(root->right, key);
            return root;
        }
        else {
            root->left = help(root->left, key);
            return root;
        }
        
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return help(root, key);
    }
};
